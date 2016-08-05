//Write a program to prompt the user to input a string
//The program checks if the string contains a capital letter
#include<stdio.h>
#define MAX 31
int main()
{
	char string[MAX];
	int found=0;//No capital letter is found yet
	
	printf("Please input a string:");
	scanf("%[^\n]%*c",string);//abc2
	
	for(int i=0;string[i]!='\0';i++)
	{
		if((string[i]=>'A' && string[i]<='Z'))
			found=1;//found the capital letter
	}
	
	if(found == 1)
		printf("The capital letter is found");
	else
		printf("The capital letter is not found");


}
