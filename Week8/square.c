//Write a program to display the following board. Your board can be of any size.
/*

****
*  *
*  *
****


*/
#include<stdio.h>

void displayBoard( unsigned int size)
{
	//Step1: first row
	for(int i=0;i<size;i++)
		printf("*");
	
	//print new line
	printf("\n");
	
	//Step2: Middle rows
	for(int j=0;j<size-2;j++)
	{
		printf("*");
		//print the spaces
		for(int i=0;i<size-2;i++)
			printf(" ");
	
		printf("*\n");
	}	
	
	//Step3: last row
		for(int i=0;i<size;i++)
		printf("*");
	
	//print new line
	printf("\n");
	
}

int main()
{
	int size;
	printf("Please input the size of the square:");
	scanf("%d",&size);
	displayBoard(size);
}
