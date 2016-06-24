/*
this program shows how you can validate input from the user
*/
#include <stdio.h>

//this function will empty the input buffer
void clearBuffer(void){
	int input = 0;
	while(input != '\n'){
		input = getchar();
		printf("DEBUG: character %c character code %d cleared\n", input, input);
	}
}

int main(void){
	int input;
	int count = 0;
	while(count != 1){
		printf("enter an integer: ");
		count = scanf("%d", &input);
		//whenever you do scanf, immediately clear the buffer after!
		clearBuffer();
	}
	printf("the user's input was: %d\n", input);
}
