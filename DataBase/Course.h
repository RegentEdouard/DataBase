#pragma once


typedef struct Course Course_node;




Course *student_node_alloc();
void add_Course(list_t* list, char* Name, int iD, int Semester, Course* n);
void print_Courses(list_t* list);
void print_Course(Course* C);