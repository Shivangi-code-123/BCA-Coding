#include<stdio.h>

int main()
{
    int i;
    printf("\nExample of break statement :");
    for(i=1; i<=10; i++)
    {
        printf("\ni=%d",i);
        if(i==5)
        {
            break;
        }
    }
    return 0;

}