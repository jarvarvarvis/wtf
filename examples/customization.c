#define WTF_HIDE_FAILED_ASSERTIONS
#define WTF_HIDE_SUCCESS_PERCENTAGE
#define WTF_HIDE_FINAL_TEST_RESULTS

#include "../wtf.h"

wtf_suite(simple) {
	wtf_suite_test(math) {
		wtf_assert_eq(5 + 1, 9);
		wtf_assert_eq(69, 'E');
		wtf_assert(1240 == 45889);
	}

	wtf_finish_suite();
}

wtf_main {
	wtf_init();
	wtf_register_suite(simple);
	wtf_run_suites();
	wtf_destroy();
}

