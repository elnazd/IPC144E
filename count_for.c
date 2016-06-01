/*
this program will count to 10 using a for loop
*/

#include <stdio.h>

int main(void){
	//recall in a for loop the syntax is: for(initalization ; condition ; update) - see notes!
	for(int count = 1 ; count <= 10 ; count++ ){
		printf("%d \n", count);
	} 
	printf("COUNTING PROGRAM COMPLETE\n");
	return 0;
}
