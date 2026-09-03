#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h>   // time()

int main()
{
    // Seed set karna zaroori hai, taaki har run me alag random numbers mile
    srand(time(0));

    // Random number generate (0 se 99 ke beech)
    int num = rand() % 100;

    int guess;
    int guess_count = 0;    
    do
    {
        printf("Guess the no: ");
        scanf("%d", &guess);
        guess_count++;
        
        if (guess < num)
            printf("Guess a higher number\n");
        else if (guess > num)
            printf("Guess a lower number\n");
        else
            printf("Congratulations! You guessed the number %d correctly.\n", num);

         
    } while (guess != num);
    printf(No of guesses: %d\n", guess_count  )

    return 0;
}
