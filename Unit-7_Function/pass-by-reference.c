#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff, int *prod) {
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
}

int main() {
    int a, b;
    int sum, diff, prod;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b, &sum, &diff, &prod);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    return 0;
}