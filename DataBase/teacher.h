#pragma once
#include "list.h"

typedef struct teacher teacher_node;


teacher_node *teacher_node_alloc();
void create_teacher(teacher_node *teacher, int teacher_number, char *teacher_name);
void parser_to_teacher(teacher_node *teacher, char **parser);
void delete_teacher(teacher_node *teacher);
int add_teacher(list_t list, teacher_node *teacher);
void remove_teacher(list_t list, teacher_node *teacher);
void print_teachers(list_t list);
void print_teacher(teacher_node *teacher);
teacher_node *find_teacher(list_t list, int teacher_number);