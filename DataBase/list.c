#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct node {	//It is a node, not realy a list
	void *item;
	struct list_t *next;
};


int list_add(list_t *head_list, void *element) {
	list_t node = (list_t)malloc(sizeof(node));
	if (node == NULL) {
		return -1;
	}
	node->next = *head_list;
	node->item = element;
	*head_list = node;
	return 0;
}

int list_count_element(list_t list) {
	if (list == NULL) {
		return 0;
	}
	return list_count_element(list_get_next(list)) + 1;
}

list_t *list_get_node(list_t list, int id) {
	if (list == NULL) {
		return NULL;
	}
	if (id == 0) {
		return list;
	}
	return list_get_node(list_get_next(list), id - 1);
}


list_t *list_create() {
	list_t *new_list = NULL;
	return new_list;
}

void *list_get_item(list_t list) {
	return list->item;
}


list_t *list_get_next(list_t list) {
	return list->next;
}