/*Write a program that prompts the user to input a string, (whitespaces allowed) 


step 1: allocate memory for the string
step 2: Scanf the string from the user
step 3: pass the string to the length() function
Step 4:in the length() function, count the number of characters in the string.
return the length of the string to the main function and display it.
*/
#include<stdio.h>
#define SIZE 31

int length(const char s[]);


int main()
{
//step 1: allocate memory for the string
	char string[SIZE];
//step 2: Scanf the string from the user
	printf("Please input a string:");
	scanf("%[^\n]",string);
//step 3: pass the string to the length() function
	printf("The length of the string is:%d",length(string));

}
int length(const char s[])
{
//Step 4:in the length() function, count the number of characters in the string. return the length of the string to the main function and display it.
	int len = 0;//Represents the length of the string
	for(int i=0; s[i]!='\0';i++)
		len++;
	return len;
}
