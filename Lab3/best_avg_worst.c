#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *file;
    
    file = fopen("best_case.txt","w");
    for(int i=0;i<100000;i++){
        fprintf(file,"%d\n",i);
    }
    fclose(file);

    file = fopen("worst_case.txt","w");
    for(int i=100000;i>0;i--){
        fprintf(file,"%d\n",i);
    }
    fclose(file);


    file = fopen("avg_case.txt","w");
    for(int i=0;i<100000;i++){
        fprintf(file,"%d\n",rand()%100000);
    }
    fclose(file);

    
}