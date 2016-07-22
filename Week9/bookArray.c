//arrays of structs
#include<stdio.h>


struct Book{
	int pages;//number of pages
	float price;
	int year;//year of publication
};
void display(const struct Book b[]);


int main(){
	//define 100 books
	struct Book bookArray[100];
	//prompt the user to input information about bookArray
	for(int i=0;i<100;i++)
	{
		printf("number of pages:");
		scanf("%d",&bookArray[i].pages);
	
		printf("Price:");
		scanf("%f",&bookArray[i].price);
	
		printf("year of publication:");
		scanf("%d",&bookArray[i].year);
	}
	
	//Calling display
	display(bookArray);//pass by address
}

//Write a display function  to display  information about an array of Books
void display(const struct Book b[])
{
	for(int i=0;i<100;i++){
		printf("number of pages:%d\n",b[i].pages);
		printf("The book is $%.2f \n",b[i].price);
		printf("year of publication:%d\n",b[i].year);
	}
}
