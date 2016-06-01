/*
this program will count to 10 using a while loop
*/

#include <stdio.h>

int main(void){
	//notice the condition will always be true
	int counter = 1;
	while (counter <= 10){
		//these statements are repeated as long as the condition above is true
		printf("%d\n", counter);
		counter = counter + 1;
		/*alternative syntax:
		counter += 1;
		adding 1 to a number is so common it has an even shorter syntax: 
		counter++; //shorthand for counter = counter + 1
		*/ 
	}
	printf("COUNTING PROGRAM COMPLETE\n");
	return 0;
}
