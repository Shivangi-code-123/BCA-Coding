#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int randomNumber,guess,attepts=0;
    srand(time(0));
    randomNumber = (rand() % 10) + 1;
    printf("\n---NUMBER GUESSING GAME---\n");
    printf("\nI think number between 1 to 100");
    printf("Do you guess the number\n");
    do
    {
        printf("\nwritten your guessing number :");
        scanf("%d",&guess);
        attepts++;
        if (guess > randomNumber)
        {
            printf("\nYour guessing number is big, take some small number!");
        }
        else if (guess < randomNumber)
        {
            printf("\nYour guessing number is small, take some big number !");
        }
        else
        {
            printf("\nCongratulation ! you are winner");
            printf("\nYour total %d (attepts)take you",attepts);
        }
        
        
    } while (guess!=randomNumber);
    return 0;
}
