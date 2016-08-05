/*Write a program to input first name and last name of a user, concatenate the strings, display the resultant string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char first[31];
	char last[31];
	char full[61];
	
	//step 1:prompt the user to input a first name
	printf("Please input your first name:");
	scanf("%[^\n]%*c",first);
	
	//step2:prompt the user to input their last name
	printf("Please input your last name:");
	scanf("%[^\n]%*c",last);
	//step3:concatenate the names and store it in full name
	strcpy(full,first);
	strcat(full," ");
	strcat(full,last);
	
	printf("The full name is %s",full);
	

}
