/*
this program attempts to write a fumnction that accepts a variable
and sets that variable's value in main() to zero i.e. 0
VERSION 2 -working version

Here we use pointers to solve the problem 

*/

#include <stdio.h>
/*
the zero function will set the value of variable whose address is passed to 0
*/
void zero(int *x){
	printf("inside zero x is: %d the address of main's x is: %p\n", *x, x);
	*x = 0;
	printf("inside zero x is now: %d the address of main's x is: %p\n", *x, x);
}

int main(void){
	int x = 5;

	printf("the value of x before calling zero(x) is: %d the address of x is: %p\n", x, &x);
	//call the function
	zero(&x);
	//we want x to be zero now.. is it???
	printf("the value of x after calling zero(x) is: %d the address of x is: %p\n", x, &x);
	return 0;
}
