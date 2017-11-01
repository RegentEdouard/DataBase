#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct node {
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

void *list_remove(list_t head_list, void *element) {
	list_t temp_list = head_list;
	if (list_get_item(temp_list) == element) {
		head_list = list_get_next(temp_list);
		return element;
	}
	while (temp_list = !NULL) {
		if (list_get_item(list_get_next(temp_list)) == element) {
			temp_list->next = list_get_next(list_get_next(temp_list->next));
			return element;
		}
	}
	return NULL;
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