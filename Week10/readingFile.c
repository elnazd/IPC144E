// Reading from a File
#include <stdio.h>

int main(void)
{
	//Step 1: create a file pointer and open the file:
    FILE *fp = fopen("alpha.txt","r");
	int page,year;
	float price;
	//Step2: Check if the file pointer is valid:
	if (fp != NULL) {
	//Step 3: Read the file and display information to the user
		while(!feof(fp)){
			fscanf(fp, "%d,%f,%d\n", &page,&price,&year);
			printf("The book has %d pages\n The book is $%.2lf\n The book is published in %d\n",page,price,year); 
		}
		
        fclose(fp);

    } else {
        printf("Failed to open file\n");
    }
    return 0;
 }
