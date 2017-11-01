#pragma once

typedef struct node* list_t;

int list_add(list_t *, void *);
int list_count_element(list_t);
list_t *list_get_node(list_t, int);

list_t *list_create();
// void list_destry(list_t);
void *list_get_item(list_t);
list_t *list_get_next(list_t);