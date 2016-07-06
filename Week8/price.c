#include <stdio.h> 
#define SIZE 3
void displayList(const double p[],const int size); 

int main(void) { 
	//double price1 = 10.60, price2 = 23.45, price3 = 5.89;  
	double price[SIZE] = {10.60, 23.45, 5.89};
	
	displayList(price,SIZE); 
	
	return 0; 
} 

void displayList(const double p[],const int size) { 

	
	printf(" Item Price\n"); 
	printf(" 1%.2lf\n", p[0]); 
	printf(" 2%.2lf\n", p[1]); 
	printf(" 3%.2lf\n", p[2]); 
	printf("Total%.2lf\n", p[0] + p[1] + p[2]); 
	
	/*for(int i=0;i<size;i++)
		printf(" %d %.2lf \n",i+1, p[i]);
	*/	
	
} 
