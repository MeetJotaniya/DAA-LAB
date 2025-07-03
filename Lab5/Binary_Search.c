#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void binarySearch(int arr[], int size , int num , int low , int high); 

void main(){

    FILE *file;
    int arr[100000];
    clock_t start, end;
    double cpu_time;

    int low = 0;
    int high = 100000;

    file = fopen("../lab3/best_case.txt" , "r");

    for(int i = 0 ; i < 100000 ; i++){
        fscanf(file , "%d" , &arr[i]);
    }

    fclose(file);

    printf("::::: Best case time :::::\n");

    start = clock();
    binarySearch(arr , 100000 , 99999 , low , high);
    end = clock();

    cpu_time = ((double) (end - start) / CLOCKS_PER_SEC);

    printf("\n%f" , cpu_time);
}

void binarySearch(int arr[] , int size , int num , int low , int high){
    // printf("Welcome to the function");
    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] < num){
            low = mid + 1;
        }

        else if(arr[mid] > num){
            high = mid - 1;
        }

        else if(arr[mid] == num){
            printf("\nThe number is founded at %d",mid);
            return;
        }
    }
}