#include<stdio.h>

int countDigit(int n) {
    int result = 0;

    while (n > 0) {
        result += n % 10;
        n /= 10;
    }

    return result;
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