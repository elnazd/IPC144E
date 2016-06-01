/*
This program demonstrates an infinite loop
using a variable
*/

#include <stdio.h>

int main(void){
	//notice the condition will always be true
	int counter = 1;
	while (counter < 10){
		//these statements are repeated as long as the condition above is true
		printf("counter is: %d\n", counter);
	}
	printf("this will never get printed because the loop above will continue forever\n");
	return 0;
}
