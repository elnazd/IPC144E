/*
this program is another example of using selection to 
tell the user whether a number they entered is even or odd
*/

#include <stdio.h>

int main(void){
	int input = 0;
	printf("Enter a number: ");
	scanf("%d", &input);
	if(input % 2 == 0)
		printf("your number: %d was EVEN\n", input);
	else
		printf("your number: %d was ODD\n", input);
	printf("PROGRAM COMPLETE. GOODBYE!\n");

	return 0;
}


