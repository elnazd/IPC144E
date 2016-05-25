/*
this program provides advice about what to do depending on the outdoor temperature
VERSION 3
use the if-else-if statement to offer the user various  advice
test the program and ensure you understand why each branch is followed depending on user input
*/

#include <stdio.h>

int main(void){
	//declare a variable to store the temperature
	int temp = 0;

	//prompt the user to enter a temperature
	printf("Yo dude, enter the temperature: ");
	//read in the response using scanf
	scanf("%d", &temp); //don't forget the &
	
	//make a decision and give the user advice based on the temperature
	if(temp > 30){ //the curly braces let us group statements into one block or sequence
		//the entire sequence within these braces will be controlled by the if condition
		printf("Wear sunscreen\n");
		printf("Also wear shorts\n");
	}else if( temp > -1 && temp < 1){
		printf("look out, might be icy\n");
	}else if(temp < 5){
		printf("Wear a coat\n");
	}else
		printf("It's temperate\n");

	printf("Have a nice day!\n");


	return 0;
}
