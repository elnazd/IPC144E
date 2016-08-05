//Write a program to prompt the user to input a string
//The program checks if the string contains a capital letter
#include<stdio.h>
#define MAX 31
int main()
{
	char string[MAX];
	int found=0;//no digit is found
	
	printf("Please input a string that contains at least one digit: ");
	scanf("%[^\n]%*c",string);
	
	for(int i=0;string[i]!='\0';i++)
	{
		if(string[i] >= '0' && string[i]<='9')
			found = 1;// a digit is found
	}
	
	if(found==1)
		printf("the string contains a digit!");
	else
		printf("The string does not contain a digit!");
		


}
