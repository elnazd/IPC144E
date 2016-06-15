/*
this program will demonstrate a simple calculation without needing to use memory addresses
However, we will use it to demonstrate declaring a pointer variable, initalizing it, and displaying the memory address
*/

#include <stdio.h>

int main(void){

	//note we can declare multiple variables in one line by separating them with a comma
	int x=0, y=0;
	int z; //or different lines!

	//declare a pointer to an integer
	//recall that pointers are variables that store the addresses of other variables
	//ALWAYS REMEMBER TO INITIALIZE POINTERS
	int *myptr = NULL;
	
	//a simple caluculation
	x = 2;
	y = 5;
	z = x + y;
	printf("the value of z is :%d\n", z);

	//get the address of variable z and store it in myptr
	myptr=&z;
	//display some memory addresses. Note: you can use %p formatting characters to print addresses with printf
	printf("the memory address of variable z is: %p\n", myptr);
	//another way to display an address is to use the & operator in the printf function call directly
	printf("The memory address of y is: %p\n", &y);
	printf("the memory address of x is: %p\n", &x);
	return 0;
}
