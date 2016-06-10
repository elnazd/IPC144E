/*
this program demonstrates using function prototypes, so that we can put our function
definitions following main
*/

#include <stdio.h>

//this is a function prototype
//it only include the first line of the function
//it serves to tell the compiler that it will find the function somewhere later in the file
void welcome(void); 
//notice the semicolon at the end, and no { }

/*
this function demonstrates accepting information as an argument
it does not return a result
it does print out a goodbye message the specified number of times
*/
void goodbye_message(int times){
	for(int count = 0; count < times; count++){
		printf("Goodbye!\n");
	} 
}

/*
this function is an example of a function that accepts two arguments:
it will compute and return the result of the base raised to the power of the exponent
*/
int power(int base, int exponent){
	int result = 1;
	
	for(int i = 0; i < exponent; i++){
		//uncomment the next line to see what the loop is doing
		//printf("DEBUG: power function, base is %d, exponent is %d, result is %d, i is %d\n", base, exponent, result, i);
		result = result * base;
	}

	return result;
}

int main(void){
	int answer = 0;
	//call a function by using its name follwed by ()
	//if the function expects arguments (information) provide that information between the ()
	welcome();

	/*
	use the power function by calling it and passing the correct number of arguments
	the order of arguments is important
	separate arguments using commas
	the power function will return a result that you can assign to a variable using =

	ex. 2 raised to the power of 3
	*/
	answer = power(2,3);
	printf("Two raised to the power of 3 is: %d\n", answer);

	//now let's say goodbye
	goodbye_message(10);
	return 0;
}

/*
this function displays a simple welcome message
(you'll do a more through job in your workshop)

the welcome message doesn't need any information to do it's job because the message is always the same
it also doesn't compute a result. Therefore... the return type and argument list are both  void
*/

void welcome(void){
        printf("Welcome to my program\n");
        printf("it doesn't do much right now\n");
        printf("Stay Tuned!\n");
}

