#include <stdio.h>
#include <stdlib.h>
#include "unit_list.h"
#include "minunit.h"
#include "list.h"

// int list_add(list_t **, void *); //
char * test_list_add_one_element() {
	list_t *test = list_create();
	int a = 123;
	int id = list_add(&test, &a);
	mu_assert("error, no element added", id == 0);
	return 0;
}

// int list_count_element(list_t *); //
char * test_list_count_empty() {
	list_t *test = list_create();
	int id = list_count_element(test);
	mu_assert("error, number of element != 0", id == 0);
	return 0;
}

char * test_list_count_one_element() {
	list_t *test = list_create();
	int a = 123;
	list_add(&test, &a);
	int id = list_count_element(test);
	mu_assert("error, number of element != 1", id == 1);
	return 0;
}

char * test_list_count_four_element() {
	list_t *test = list_create();
	int a = 123;
	list_add(&test, &a);
	list_add(&test, &a);
	list_add(&test, &a);
	list_add(&test, &a);
	int id = list_count_element(test);
	mu_assert("error, number of element != 4", id == 4);
	return 0;
}


// list_t *list_get_node(list_t *, int); //
char * test_list_get_node_empty() {
	list_t *test = list_create();
	mu_assert("error, find a node in an empty list", list_get_node(test, 0) == 0);
	return 0;
}

char * test_list_get_node_out() {
	list_t *test = list_create();
	int a = 123;
	list_add(&test, &a);
	list_add(&test, &a);
	mu_assert("error, find a node in an empty list", list_get_node(test, 2) == 0);
	return 0;
}

char * test_list_get_node_four_element() {
	list_t *test = list_create();
	int a = 123;
	int b = 489;
	int c = 0;
	int d = 5;
	list_add(&test, &a);
	list_add(&test, &b);
	list_add(&test, &c);
	list_add(&test, &d);
	int number_true = 0;
	number_true += *(int *)list_get_item(list_get_node(test, 0)) == d;
	number_true += *(int *)list_get_item(list_get_node(test, 1)) == c;
	number_true += *(int *)list_get_item(list_get_node(test, 2)) == b;
	number_true += *(int *)list_get_item(list_get_node(test, 3)) == a;
	mu_assert("error, can't find node", number_true == 4);
	return 0;
}