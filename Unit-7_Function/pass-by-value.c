#include<stdio.h>
#define PI 3.1416

void circleArea(float radius){
float area = PI * radius * radius;
printf("Area of circle is %.2f\n", area);
}

int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);

    circleArea(r); // Pass by value
    return 0;
}