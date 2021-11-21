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
	wtf_register_suite(strings);

        wtf_run_suites();
	wtf_log_results();

	wtf_destroy();
}
