#include<stdio.h>
#define SIZE 20
void display(const int number[], const int size);

int main()
{
	//define an array of 20 students
	int s_number[SIZE];
	//Write a program to prompt 20 students to enter their numbers. 
	//Save the numbers in an array.
	for(int i=0;i<SIZE;i++)
	{
		printf("Please input your student number:");
		scanf("%d",&s_number[i]);
	}
	//display all student numbers-use display function
	//calling the function
	display(s_number,SIZE);//Pass only the name of the array
	
	return 0;
}
//Write a function to display all of the elements of s_number.
void display(const int number[], const int size)
{
	for(int i=0;i<size;i++)
		printf("%d \n",number[i]);
		
}
