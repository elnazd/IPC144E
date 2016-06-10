/*
this program demonstrates creating and using programmer defined functions
*/

#include <stdio.h>

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


int main(void){
	//call a function by using its name follwed by ()
	//if the function expects arguments (information) provide that information between the ()
	welcome();

	//now let's say goodbye
	goodbye_message(10);
	return 0;
}
