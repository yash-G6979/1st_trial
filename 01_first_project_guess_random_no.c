#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number = (rand() % 100) + 1;
    int no_of_guesses = 0, guessed_number;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);

        if (guessed_number > number)
        {

            printf("You have entered a higher number\n");
        }else if (guessed_number < number)
        {
    
            printf("You have entered a lower number\n");
        }
        
        else
        {
            printf("congrates!\n");
        }
        no_of_guesses++;
    } while (guessed_number != number);
    
        printf("The number entered is correct!\n");

        printf("Number of guesses: %d\n", no_of_guesses);
    
    return 0;
}