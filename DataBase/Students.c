#include <stdio.h>
#include "Students.h"


void print_Student(int student_number)
{
	Student* Stud = find_student(student_number);
	printf("First Name: %s\n Student iD: %d\n"
		, Stud->FName, Stud->Student_Number);
}

Student* find_student(int student_number)
{
	Student* current_element;
	Student_Node* current_node = Student_list_head;
	while (current_node->Student->Student_Number != student_number)
	{
		current_element = current_node->Student;
		current_node = current_node->Next;
	}
	return current_element;
}

void print_list()
{
	Student* current_element;
	Student_Node* current_node = Student_list_head;
	while (current_node != NULL)
	{
		current_element = current_node->Student;
		current_node = current_node->Next;
		print_Student(current_element);
	}
}

int create_student(char* FName, int iD)
{
	int result = 0;
	Student* new_student = (Student*)malloc(sizeof(Student));
	new_student->FName = FName;
	new_student->Student_Number = iD;
	result = add_student(new_student);
	return result;
}

int add_student(void* Student)
{
	int result = 0;
	Student_Node* new_node = (Student_Node*)malloc(sizeof(Student_Node));
	new_node->Student = Student;
	new_node->Next = Student_list_head;
	Student_list_head = new_node;
	if (new_node == NULL)
	{
		result = -1;
	}
	return result;
}


