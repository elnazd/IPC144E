#include<stdio.h>
#define SIZE 4
void display(const int number[], const int size);

int main()
{
	//define an array of 20 students
	int s_number[SIZE]={123456,456781,415278,987456};
	int grades[SIZE]={7,8,9,4};
	
	//search for a student whose grade is 4
	//calling search function
	//int search(int g[],int n,int size)
	int variable = search(grades,4,SIZE);
	if(variable == -1)
		printf("The student is not found!");
	else
		printf("The index is %d",variable);
	
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
//search
/*
Write a function to look through grades array and find grade 'n'.
This function returns the index of the found grade.
If the function does not find the grade, it returns -1.
int search(int g[],int n,int size);
*/
int search(int g[],int n,int size)
{
	int index=-1; //nothing is found yet

	for(int i=0;i<size;i++)
	{
		if(g[i] == n)
		{
			index = i;
			i=size;//the loop stops once the item is found
		}
	}
	return index;
}
/*
Write a function to find the student whose grade is 4.
If the student is found, the function displays the student number. Otherwise, the function displays the student is not found.
void search_student(int g[],int s_number[],int size).
*/
void search_student(int g[],int s_number[], int size)
{
	//first step:
	//search in g array for the index with value 4
	int index = search(g,4,size); 
	
	if(index == -1)
		printf("The student is not found!");
	else
		printf("The student number is: %d",s_number[index]);
	
}









