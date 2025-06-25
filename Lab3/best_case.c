#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selection(int arr[],int size);

void main(){
    FILE *file;
    int arr[100000];
    clock_t start,end;
    double time_taken;


    file = fopen("best_case.txt","r");

    for(int i = 0; i < 100000 ; i++){
        fscanf(file, "%d", &arr[i]);
    }
    printf(":::Best Case:::");
    start = clock();
    selection(arr, 10000);
    end = clock();

    time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken by bubble sort in best case: %f ms\n",time_taken);
}


// void bubble(int arr[]){
//     int i,j;

//     for(i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++){
//         int swapped = 0;
//         for(j = i+1 ; j<sizeof(arr)/sizeof(arr[0]);j++){
//             if(arr[i] > arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//                 swapped = 1;
//             }
//         }
//         if(swapped == 0){
//             break;
//         }
//     }
//     for(i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++){
//         printf("%d ",arr[i]);
//     }
// }

void selection(int arr[], int size){
    int i,j;

    for(i = 0 ; i < size - 1 ; i++){
        int min = i;

        for(j = i; j < size  ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for(i = 0 ; i < sizeof(arr)/sizeof(arr[0])  ; i++){
        printf("%d ",arr[i]);
    }
}