#include<stdio.h>
#define SIZE 100

struct Queue{
    int arr[SIZE];
    int front, rear;
}q;

void Enqueue(int element){
    if ((q.rear + 1) % SIZE == q.front){
        printf("Queue is full\n");
        return;
    }
    q.arr[q.rear]=element;
    q.rear = (q.rear + 1) % SIZE;
}

void Dequeue(){
    if (q.front == q.rear){
        printf("Queue is empty\n");
        return;
    }
    q.arr[q.front];
    q.front=(q.front+1) % SIZE;
}

void Display(){
    int i=0;
    for(i=q.front;i<q.rear;i++){
        printf("Element is = %d\n",q.arr[i]);
    }
}

int main(){
    int choice,element,index;
    while(choice!=4){
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("Enter the operation you want to perform:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the element to be inserted\n");
                scanf("%d",&element);
                Enqueue(element);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            default:
                printf("Invalid choice\n");
        }
    }
}