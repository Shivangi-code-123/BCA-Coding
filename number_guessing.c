#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int randomNumber, guess,attempts=0;
    srand(time(0));
    randomNumber = (rand() % 100) + 1;
    printf("\n---NUMBER GUESSING---\n");
    printf("I Think in 1 to 100 number.\n");
    printf("Do you  guess the number?\n\n");
    do
    {
        printf("\nWrite Your guess number :");
        scanf("%d",&guess);
        attempts++;

        if(guess>randomNumber)
        {
            printf("This is Big number!  take some small number.\n\n");
        }
        else if(guess<randomNumber)
        {
            printf("This is very small number! Take same Big number.\n\n");
        }
        else
        {
            printf("\nCongratulation! Your are select right number!\n");
            printf("Your Total %d Trail(attempts)take you.\n",attempts);
        }
    } while (guess!=randomNumber);
    return 0;
    
}