#include <stdio.h>
int main()
{
    int secret = 15;
    int guess;

    printf("Guess a number(1-50): ");
    scanf("%d", &guess);

    while (guess != secret)
    {
        if (guess > secret)
        {
            printf("Too high! Try again");
        }
        else
        {
            printf("Too low! Try again");
        }
        scanf("%d", &guess);
    }
    printf("Correct! You guessed the right number");

    return 0;
}