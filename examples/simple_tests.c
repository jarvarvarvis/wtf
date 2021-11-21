#include "../wtf.h"

wtf_suite(maths) {
	int a = 14, b = 25;
	wtf_suite_test(add) {
		int result = a + b;
		int expected = 39;

		wtf_assert_eq(result, expected);
	}

	wtf_suite_test(subtract) {
		int result = b - a;
		int expected = 11;

		wtf_assert_eq(result, expected);
	}

	wtf_suite_test(multiplication) {
		int result = a * (b - 5);
		int expected = 280;

		wtf_assert_eq(result, expected);
	}
}

wtf_suite(null) {
	wtf_suite_test(is_null) {
		wtf_assert_null(NULL);
	}
}

wtf_suite(strings) {
	wtf_suite_test(cmp) {
		wtf_assert_streq("Hello", "Hello");
	}

	wtf_suite_test(cmp_fail) {
		wtf_assert_streq("Hello", "Helol");
	}
}

wtf_main {
	wtf_init();

	wtf_register_suite(maths);
	wtf_register_suite(null);
	wtf_register_suite(strings);

        wtf_run_suites();

	wtf_destroy();
}
