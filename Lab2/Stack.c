#include<stdio.h>
#define SIZE 100

struct Stack{
    int top;
    int arr[SIZE];
}s;

void PUSH(int element){
    s.arr[++s.top]=element;
}

void POP(){
    printf("Popped element: %d\n", s.arr[s.top--]);
}

void CHANGE(int element,int index){
    s.arr[s.top-index+1]=element;
}

void DISPLAY(){
    int i=0;
    for(i=s.top;i>0;i--){
        printf("Element is = %d\n",s.arr[i]);
    }
}

int main(){
    int choice,num,index;
    while (choice!=5)
    {
        printf("Enter the operation you want to perform:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the element you want to push:");
                scanf("%d",&num);
                PUSH(num);
                break;
            case 2:
                printf("POP:");
                POP();
                break;
            case 3:
                printf("Enter the element you want to change:");
                scanf("%d",&num);
                printf("Enter the index you want to change:");
                scanf("%d",&index);
                CHANGE(num,index);
                break;
            case 4:
                DISPLAY();
                break;
            default:
                printf("Invalid choice");
        }   
    }     
}