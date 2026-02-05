#include<stdio.h>

int main(){
    float n1, n2, n3, n4, n5;
    float sum, avg;

    printf("Enter 5 numbers:\n");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    sum = n1 + n2 + n3 + n4 + n5;
    avg = sum / 5;

    printf("\nAverage = %.2f\n", avg);

    printf("\nDeviation values:\n");
    printf("%.2f\n", n1 - avg);
    printf("%.2f\n", n2 - avg);
    printf("%.2f\n", n3 - avg);
    printf("%.2f\n", n4 - avg);
    printf("%.2f\n", n5 - avg);

    return 0;
}
