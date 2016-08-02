/*Write a program that prompts the user to input a string, (whitespaces allowed) 

step 1: allocate memory for the string
step 2: Scanf the string from the user
step 3: define another string as backup
step 4: copy string to backup
*/
#include<stdio.h>
#include<string.h>
#define SIZE 31
int main()
{
//step 1: allocate memory for the string
	char string[SIZE];
	char backup[SIZE];
	
//step 2: Scanf the string from the user
	printf("Please input a string:");
	scanf("%[^\n]",string);
	
	//Write a statement to copy string to backup
	//backup = string;//WRONG!!!!
	strcpy(backup,string);
	
	printf("The first string is: %s\n",string);
	printf("The backup string is: %s\n",backup);
	
}

