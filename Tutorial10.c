#include<stdio.h>

int main()
{
    int age;
    printf("Enter you age\n");

    scanf("%d", &age);
    printf("You have entered %d as your age\n",age);
    if (age>=18)    
    {
        printf("You can vote!");
    }

    else if(age>10)
    {
        printf("You age between 10 to 18 and you can vote for kids");
    }
    
    else if(age>=3)
    {
    printf("your age between 3 to 10 you can vote for babies");
}
else{
    printf("You cannot vote!");
}
    return 0;
}
