#pragma once



typedef struct Student Student_node;



void print_Student(Student* Stud);
Student * find_Student(int Student_number, list_t* list);
void print_Students(list_t* list);
void add_student(list_t* list, char* FirstName, int iD, Student* n);
Student *student_node_alloc();