#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void linearSearch(int arr[], int size , int num); 

void main(){

    FILE *file;
    int arr[100000];
    clock_t start, end;
    double cpu_time;

    file = fopen("../lab3/best_case.txt" , "r");
    if(file){
        printf("File is opened");
    }

    else{
        printf("File is not opened");
    }
    for(int i = 0 ; i < 100000 ; i++){
        fscanf(file , "%d" , &arr[i]);
    }

    fclose(file);

    printf("::::: Best case time :::::\n");

    start = clock();
    linearSearch(arr , 100000 , 99999);
    end = clock();

    cpu_time = ((double) (end - start) / CLOCKS_PER_SEC);

    printf("%f" , cpu_time);
}

void linearSearch(int arr[] , int size , int num){
    
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == num){
            printf("The number is founded at %d\n" , i);
            break;
        }
    }
}