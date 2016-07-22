//Write a C program to print "C is fun." in a file
#include<stdio.h>
int main()
{

	int page=200;
	float price=20.99;
	int year = 2009;

	//Step 1: Create file pointer
	FILE *fp = fopen("Writefiles.txt","w");
	
	//Step 2: Check if the file pointer is valid
	if(fp!=NULL){
		//Step 3: Write to the file
		fprintf(fp,"C is fun!\n");
		fprintf(fp,"%d,%.2lf,%d\n",page,price,year);
		
		fclose(fp);		
	}else
		printf("Error! Cannot open the file!");
	
	
	return 0;
}
