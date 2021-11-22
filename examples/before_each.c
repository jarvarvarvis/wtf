#include "../wtf.h"
#include <stdio.h>

#include "some_struct.h"

some_struct_t *test_struct;

wtf_suite_before_each(some_struct) {
	// Create some data
	test_struct = some_struct_new(3459);
}

wtf_suite_after_each(some_struct) {
	// Free the allocated data
	if (test_struct) {
		some_struct_destroy(test_struct);
		free(test_struct);
	}
}

wtf_suite(some_struct) {
	wtf_suite_test(add) {
		some_struct_add(test_struct, 419);

		wtf_assert_eq(test_struct->value, 3878);
		wtf_assert_streq(test_struct->string_value, "Value: 3878");
	}

	wtf_suite_test(add_fail) {
		some_struct_add(test_struct, 128);

		wtf_assert(test_struct->value > 1000);
		wtf_assert_eq(test_struct->value, 1000);

		wtf_assert_streq(test_struct->string_value, "Value: 500");
	}
        
	wtf_suite_test(clear) {
		some_struct_clear(test_struct);

		wtf_assert_eq(test_struct->value, 0);
		wtf_assert_null(test_struct->string_value);
	}
}

wtf_main {
	wtf_init();

	wtf_register_suite(some_struct);
	wtf_register_before_each(some_struct);
	wtf_register_after_each(some_struct);

	wtf_run_suites();

	wtf_destroy();
}
