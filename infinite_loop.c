/*
This program demonstrates an infinite loop
*/

#include <stdio.h>

int main(void){
	//notice the condition will always be true
	while (1){
		//these statements are repeated as long as the condition above is true
		printf("this is an infinite loop. press ctrl+c to quit (in unix)!\n");
	}
	printf("this will never get printed because the loop above will continue forever\n");
	return 0;
}
