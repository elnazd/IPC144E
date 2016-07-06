#include<stdio.h>
#define SIZE 4
void display(const int number[], const int size);

int main()
{
	//define an array of 4 students
	int s_number[SIZE]={123456,75896,546789,456789};
	
	//change student number 123456 to 879654
	s_number[0]=879654;
	s_number[1]=456123;
	
	//display student number 2
	printf("The number is %d",s_number[2]); //output:546789
	
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
