#include "../wtf.h"

wtf_suite(lotta_tests) {
	wtf_suite_test(test1) {
		wtf_assert(1);
	}
	wtf_suite_test(test2) {
		wtf_assert(0);
	}
	wtf_suite_test(test3) {
		wtf_assert(1);
	}
	wtf_suite_test(test4) {
		wtf_assert(0);
	}
	wtf_suite_test(test5) {
		wtf_assert(1);
	}
	wtf_suite_test(test6) {
		wtf_assert(0);
	}
	wtf_suite_test(test7) {
		wtf_assert(1);
	}
	wtf_suite_test(test8) {
		wtf_assert(0);
	}
	wtf_suite_test(test9) {
		wtf_assert(1);
	}
	wtf_suite_test(test10) {
		wtf_assert(0);
	}
	wtf_suite_test(test11) {
		wtf_assert(1);
	}
	wtf_suite_test(test12) {
		wtf_assert(0);
	}
	wtf_suite_test(test13) {
		wtf_assert(1);
	}
	wtf_suite_test(test14) {
		wtf_assert(0);
	}
	wtf_suite_test(test15) {
		wtf_assert(1);
	}
	wtf_suite_test(test16) {
		wtf_assert(0);
	}
	wtf_suite_test(test17) {
		wtf_assert(1);
	}
	wtf_suite_test(test18) {
		wtf_assert(0);
	}
	wtf_suite_test(test19) {
		wtf_assert(1);
	}
	wtf_suite_test(test20) {
		wtf_assert(0);
	}
	wtf_suite_test(test21) {
		wtf_assert(1);
	}
	wtf_suite_test(test22) {
		wtf_assert(0);
	}
	wtf_suite_test(test23) {
		wtf_assert(1);
	}
	wtf_suite_test(test24) {
		wtf_assert(0);
	}
	wtf_suite_test(test25) {
		wtf_assert(1);
	}

	wtf_finish_suite();
}

wtf_main {
	wtf_init();

	wtf_register_suite(lotta_tests);

	wtf_run_suites();

	wtf_destroy();
}
