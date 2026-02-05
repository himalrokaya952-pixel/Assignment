#include<stdio.h>
int main(){
    float l, b;
    float a, p;

    // Taking length and breath input from user
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);

    // Calculating area
    a = l * b;

    // Calculating perimeter
    p = 2 * (l + b);

    // Display results
    printf("Area = %.2f\n", a);
    printf("Perimeter = %.2f", p);

    return 0;
}
