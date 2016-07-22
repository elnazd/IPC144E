#include<stdio.h>
//define a struct type for a Book
//each book has the following variables:
//number of pages
//price
//year of publication
struct Book{
	int pages;//number of pages
	float price;
	int year;//year of publication
};
void display(const struct Book *b);

//Write a main program to create an object of Book
int main(){
	struct Book myBook;
	//prompt the user to input information about myBook(scanf)
	printf("number of pages:");
	scanf("%d",&myBook.pages);
	
	printf("Price:");
	scanf("%f",&myBook.price);
	
	printf("year of publication:");
	scanf("%d",&myBook.year);
	
	//Calling the display function:
	display(&myBook);//Pass by address
}
//Write a display function  to display  information about a book
void display(const struct Book *b)
{
	printf("number of pages:%d\n",b->pages);
	printf("The book is $%.2f \n",b->price);
	printf("year of publication:%d",b->year);
}
