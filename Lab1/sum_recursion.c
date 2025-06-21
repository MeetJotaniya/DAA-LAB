#include<stdio.h>

int sum(int n) {
    if (n <= 0) {
        return 0;
    }

    return n + sum(n - 1);
}

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = sum(num);
    printf("Sum of 1 to %d is %d\n", num, result);
}