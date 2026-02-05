#include<stdio.h>
int main(){
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII value = %d\n", ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("Uppercase = %c", ch - 32);
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("Lowercase = %c", ch + 32);
    }
    else{
        printf("Not an alphabet character");
    }

    return 0;
}
