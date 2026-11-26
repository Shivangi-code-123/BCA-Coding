//single student
#include<stdio.h>

struct student
{
    int roll;
    char name[20];
};
    int main()
    {
        struct student s1;
        printf("\nEnter roll number");
        scanf("%d",&s1.roll);
        printf("\nEnter name");
        scanf("%s",s1.name);
        printf("\nRoll number : %d",s1. roll);
        printf("\nName :%s\n",s1.name);
        return 0;
    }