#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Palindrome check
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome string\n");
    else
        printf("Not a palindrome\n");

    // Convert to uppercase
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}