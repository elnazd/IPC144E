/*Quiz Postal code answers*/
#include<stdio.h>
#include<string.h>
#define SIZE 7
int postalCode(const char code[])
{
	int valid=1;//Assume the postal code is valid
	//If the length is not 6, the postal code is not valid
	if(strlen(code)!=6)
		valid = 0;
	for(int i=0;code[i]!='\0' && valid ; i++)
	{
		if(i%2 == 0){
			if(code[i]>='A' && code[i]<='Z')
				valid = 1;
			else valid = 0;
		}
		else if(code[i]>='0' && code[i]<='9')
				valid = 1;
			else valid = 0;
	}
	
	return valid;

}
int main()
{
	char code[SIZE];
	int valid=0; 
	
	do{
	
		printf("Please input a valid postal code: (ALL IN CAPITAL LETTERS)\n");
		scanf("%[^\n]%*c",code);
		valid=postalCode(code);
		if(valid == 0)
			printf("%s is not a valid postal code.\n",code);
		else
			printf("%s is a valid postal code.\n",code);
			
	
	}while(valid ==0);
	
	return 0;


}
