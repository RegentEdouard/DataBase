#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "Students.h"



typedef struct Student
{
	char*	FName;
	int		iD;

}Student;


Student *student_node_alloc()
{
	return (Student*)malloc(sizeof(Student));
}

void add_student(list_t* list, char* FirstName, int iD, Student* n)
{
	n->FName = FirstName;
	n->iD = iD;
	list_add(list, n);
}

void print_Students(list_t* list)
{
	if (list_get_item(list) == NULL)
	{
		return;
	}
	else
	{
		print_Student(list_get_item(list));
		print_Students(list_get_next(list));
	}

}


void parser_to_Student(Student* stud, char** parser)
{
	stud->iD = atoi(parser[1]);
	stud->FName = parser[2];
	return;
}

Student * find_Student(int Student_number, list_t* list)
{
	list_t * temporary = list;
	while (((Student *)list_get_item(temporary))->iD != Student_number)
	{
		temporary = list_get_next(temporary);
	}
	return list_get_item(temporary);
}

void print_Student(Student* Stud)
{
	printf("First Name: %s\nStudent iD: %d\n"
		, Stud->FName, Stud->iD);
}