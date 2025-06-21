#include<stdio.h>

int power(int n, int p) {
    if (p == 0) {
        return 1;
    }

    return n * power(n, p - 1);
}

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int pow;
    printf("Enter the power for %d: ", num);
    scanf("%d", &pow);
    
    int result = power(num, pow);
    printf("%d to the power %d is %d\n", num, pow, result);
}