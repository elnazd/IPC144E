/*
this program provides advice about what to do depending on the outdoor temperature
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
	}
	printf("Have a nice day!\n");


	return 0;
}
