#include<stdio.h>

int sum(int n) {
    int result = 0;

    for (int i = 1; i <= n; i++) {
        result += i;
    }

    return result;
}

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = sum(num);
    printf("Sum of 1 to %d is %d\n", num, result);
}