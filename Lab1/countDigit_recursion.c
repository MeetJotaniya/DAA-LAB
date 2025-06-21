#include<stdio.h>

int countDigit(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) + countDigit(n / 10);
}

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Please enter a non-negative number.\n");
        return;
    }
    
    int result = countDigit(num);
    printf("Sum of digits of %d is %d\n", num, result);
}