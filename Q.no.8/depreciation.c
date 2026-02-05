#include<stdio.h>
int main() {
    float original_value, rate, depreciated_value;

    printf("Enter original value: ");
    scanf("%f", &original_value);

    printf("Enter depreciation rate: ");
    scanf("%f", &rate);

    //calculating deprciated value using formula
    depreciated_value = original_value * (1 - rate/100);

    printf("Depreciated value = %.2f", depreciated_value);

    return 0;
}
