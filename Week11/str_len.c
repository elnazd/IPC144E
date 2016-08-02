/*Write a program that prompts the user to input a string, (whitespaces allowed) 


step 1: allocate memory for the string
step 2: Scanf the string from the user
step 3: pass the string to the length() function
*/
#include<stdio.h>
#include<string.h>
#define SIZE 31
int main()
{
//step 1: allocate memory for the string
	char string[SIZE];
	int len; //represents the length of the string
	
//step 2: Scanf the string from the user
	printf("Please input a string:");
	scanf("%[^\n]",string);
//step 3: pass the string to a library function to calculate the length
	len = strlen(string);
	printf("The length of the string is: %d\n",len);
}

