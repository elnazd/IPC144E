#include<stdio.h>
struct Student{ //data type
	int number;
	char grades[10];//10 is maximum number of courses 
};
void display(const struct Student *s);

int main()
{
//Define an object of Student
	struct Student harry; //struct Student is a data type			
	//s1 is an object
	harry.number = 123456;
	harry.grades[0]='A';
	harry.grades[1]='C';
	harry.grades[2]='B';
	display(&harry);//pass by address
}

//Write a display function  to display  information about a student
void display(const struct Student *s)
{
	printf("Student number:%d\n", s->number);
	printf("Student grades:%c\n", s->grades[0]);
	printf("Student grades:%c\n", s->grades[1]);
	printf("Student grades:%c\n", s->grades[2]);
}
