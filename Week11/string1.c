#include<stdio.h>
#define SIZE 31
void display(const char s[]);

int main()
{
	char name[SIZE];
	//prompt the user to input a name
	printf("Please input you name:"); //Whitespaces allowed
	scanf("%[^\n]",name);//harry potter

	//Calling display function:
	display(name);


}
//This function takes a string and displays it
void display(const char s[])
{
	//solution 1:
	printf("Your name is: %s.\n",s);

	//solution2:
	//puts(s);

	/* solution 3:
	for(int i=0;s[i]!='\0';i++)
		printf("%c",s[i]);
	*/

}
