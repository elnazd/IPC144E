/*
this program attempts to write a fumnction that accepts a variable
and sets that variable's value in main() to zero i.e. 0
VERSION 2 -working version

Here we use pointers to solve the problem 

*/

#include <stdio.h>
/*
the zero function will set the value of variable whose address is passed to 0
now x is a pointer to an integer int *x
recall pointers store the addresses of other variables
*/
void zero(int *x){
	//notice we now need to dereference x to access its value
	//the dereference operator is *
	//ex. to dereference x the syntax is *x 
	printf("inside zero x is: %d the address of main's x is: %p\n", *x, x);
	//store 0 at the memory pointed to by *x
	*x = 0;
	printf("inside zero x is now: %d the address of main's x is: %p\n", *x, x);
}

int main(void){
	int x = 5;

	printf("the value of x before calling zero(x) is: %d the address of x is: %p\n", x, &x);
	//call the function - it expects the ADDRESS of x ... recall the address-of operator &
	zero(&x);
	//we want x to be zero now.. is it???
	printf("the value of x after calling zero(x) is: %d the address of x is: %p\n", x, &x);
	return 0;
}
