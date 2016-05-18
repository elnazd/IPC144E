/*
this is a multi line comment, it's used to document the program for human readers
everything between the slash star  and star slash is ignored by the compiled

this program asks the user to enter two integers
the program will compute the sum of the two numbers
and display the result to the user

*/

//this is a single line comment. everything on the line following the // is ignored

//the printf function is provided within the stdio.h library
//a library is a way to use code written by others
#include <stdio.h>

//every c program we write will have a "main" function
//a function is a modular piece of a program
int main(void){
	//the first line or statement in your program to be executed is the first line in main()

	//we declare variables to represent each piece of information needed in the program

	//first number
	int first = 0;
	//second number
	int second = 0;
	//a variable to store the result
	int sum = 0;

	//get the first and second number from the user
	//this is called "prompting" the user
	//1) ask the user a question
	printf("Enter the first number: ");
	//2) copy the information entered by the user into a variable
	scanf("%d", &first);
	//don't forget the & symbol before the variable name when using scanf
	//repeat the steps for the second number
	printf("Enter the second number: ");
	scanf("%d", &second);

	//compute the result;

	sum = first + second;

	//display the result to the user
	printf("The sum of the numbers is: %d \n", sum);

	return 0;
}
