#include<stdio.h>
int main(){
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    printf("%d\t%d\t", a, b);

    for(i = 3; i<=n; i++){
        c = a+b;
        printf("%d\t", c);
        a = b;
        b = c;
    }

    return 0;
}