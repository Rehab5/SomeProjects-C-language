#include <stdio.h>
#include <stdlib.h>

void calc();
int main() {
    int x,y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("\nEnter second number: ");
    scanf("%d",&y);
    int sum, sub, mul;

    calc(x, y, &sum, &sub, &mul);

    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);

    return 0;
}

void calc(int a, int b, int *sum, int *sub, int *mul) {
    *sum = a + b;
    *sub = a - b;
    *mul = a * b;
}
