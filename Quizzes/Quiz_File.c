/*Quiz File answers*/
#include<stdio.h>
#define SIZE 4
struct Comedian{
    int id;
    int FI;
    int NI;
};

void average(const struct Comedian people[])
{
    int sumFI=0, sumNI=0;
    float averageFI,averageNI;
    
    for(int i=0;i<SIZE;i++){
        sumFI = sumFI + people[i].FI;
        sumNI = sumNI + people[i].NI;
    }
    
    averageFI=sumFI/SIZE;
    averageNI=sumNI/SIZE;
    
    printf("Average FI is: %.2lf\n",averageFI);
    printf("Average NI is: %.2lf\n",averageNI);
    
}

int main()
{
    struct Comedian people[SIZE];
    int i=0;
    FILE *fp=fopen("comedy.dat","r");
    if(fp!=NULL){
        while(!feof(fp)){
            fscanf(fp,"%d-%d-%d\n",&people[i].id,&people[i].FI,&people[i].NI);
            i++;
        }
        fclose(fp);
        
        //Computing average FI and NI:
        average(people);
    }else
        printf("Cannot open the file!\n");
	return 0;
}

