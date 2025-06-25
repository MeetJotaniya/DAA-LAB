#include<stdio.h>

void main(){
    int arr[] = {10,5,7,89,6,4,11,13};

    int i;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
