/*
this program attempts to write a fumnction that accepts a variable
and sets that variable's value in main() to zero i.e. 0
NOTE: this version doesn't work yet!

we'll see why.

*/

#include <stdio.h>

void zero(int x){
	printf("inside zero x is: %d the address of x is: %p\n", x, &x);
	x = 0;
}

int main(void){
	int x = 5;

	printf("the value of x before calling zero(x) is: %d the address of x is: %p\n", x, &x);
	//call the function
	zero(x);
	//we expect x to be zero now.. is it???
	printf("the value of x after calling zero(x) is: %d the address of x is: %p\n", x, &x);
	return 0;
}
