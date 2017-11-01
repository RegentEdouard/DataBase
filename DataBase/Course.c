#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "Course.h"


typedef struct Course
{
	char*	Name;
	int		iD;
	int		Semester_Nb;

}Course;



Course *student_node_alloc()
{
	return (Course *)malloc(sizeof(Course));
}

void add_Course(list_t* list, char* Name, int iD, int Semester, Course* n)
{
	n->Name = Name;
	n->iD = iD;
	n->Semester_Nb = Semester;
	list_add(list, n);
}

void print_Courses(list_t* list)
{
	if (list_get_item(list) == NULL)
	{
		return;
	}
	else
	{
		print_Student(list_get_item(list));
		print_Courses(list_get_next(list));
	}

}



void print_Course(Course* C)
{
	printf("Course Name: %s\nCourse iD: %d\nSemester Number: %d"
		, C->Name, C->iD, C->Semester_Nb);
}


Course * find_Course(int Course_number, list_t* list)
{
	list_t * temporary = list;
	while (((Course *)list_get_item(temporary))->iD != Course_number)
	{
		temporary = list_get_next(temporary);
	}
	return list_get_item(temporary);
}