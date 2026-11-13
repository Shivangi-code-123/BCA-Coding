#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int choice;
    int num1,num2,userAnswer,correctAnswer;
    int score =0;

    printf("=========================================================\n");
    printf("  WELCOME TO MATH QUIZ!   \n");
    printf("=========================================================\n");
    printf("1.Addition(+)\n");
    printf("2.subtration(-)\n");
    printf("Choose an option(1 or 2):");
    scanf("%d",&choice);
    srand(time(0));
    num1=rand() % 20 + 1;
    num2=rand() % 20 + 1;

    if(choice==1)
    {
        printf("\nwhat is %d+%d?\n",num1,num2);
        correctAnswer=num1 + num2;
    }
    else if(choice==2)
    {
        if(num1<num2)
        {
            int temp = num1;
            num1=num2;
            num2=temp;
        }
        printf("\nWhat is %d-%d?\n",num1,num2);
        correctAnswer=num1 - num2;
    }
    else
    {
        printf("Invailid choice! please select 1 or 2.\n");

        return 0;
    }
    printf("Your Answer: ");
    scanf("%d",&userAnswer);

    if(userAnswer==correctAnswer)
    {
printf("Right Answer! Good Job!\n");
score = score + 1;
    }
    else
    {
        printf("Wrong Answer! Right Answer:%d\n",correctAnswer);
    }
    printf("Your Total score: %d\n",score);
    printf("======================================================\n");
    
    return 0;
}