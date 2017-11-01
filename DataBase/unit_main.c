#include <stdio.h>
#include "minunit.h"
#include "unit_list.h"

#ifdef TEST
int tests_run = 0;

static char * all_tests() {
	mu_run_test(test_list_add_one_element);
	mu_run_test(test_list_count_empty);
	mu_run_test(test_list_count_one_element);
	mu_run_test(test_list_count_four_element);
	mu_run_test(test_list_get_node_empty);
	mu_run_test(test_list_get_node_out);
	mu_run_test(test_list_get_node_four_element);
	return 0;
}

int main(int argc, char **argv) {
	char *result = all_tests();
	if (result != 0) {
		printf("%s\n", result);
	}
	else {
		printf("ALL TESTS PASSED\n");
	}
	printf("Tests run: %d\n", tests_run);
	while (1);
	return result != 0;
}
#endif // TEST