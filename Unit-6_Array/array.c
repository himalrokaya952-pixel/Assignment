#include <stdio.h>

int main() {
    int n, i;
    int max, min;

    //Store n numbers in an array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    //Find the maximum and minimum
    max = min = a[0]; // Initialize with the first element
    for(i = 1; i < n; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    printf("\nMaximum value: %d", max);
    printf("\nMinimum value: %d", min);

    //Printing Backwards
    printf("\nArray in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    //Search for a Maximum and Print
    //Example logic based on prompt [1, 3, 4, 10, 12, 30, 40] -> Largest is 40
    printf("\nThe largest number found in the array is: %d\n", max);

    return 0;
}