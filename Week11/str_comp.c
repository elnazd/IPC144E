
#include<stdio.h>
#include<string.h>
#define SIZE 31
int main()
{
	char string1[31]="harry";
	char string2[31]="harry";

	if(!strcmp(string1,string2))//if(strcmp(string1,string2)==0)
		printf("The strings are equal");
	else
		printf("The strings are not equal");
	
}
