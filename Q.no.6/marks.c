#include<stdio.h>
int main(){
    float m1, m2, m3, m4, m5;
    float total, average;

    printf("Enter marks of 5 subjects of a student: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;

    //Display result
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f", average);

    return 0;
}