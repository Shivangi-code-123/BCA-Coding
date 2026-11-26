#include<stdio.h>

int main()
{
    int i;
    printf("Example of continue statement\n");
    for(i=1;i<=10;i++)
    {
        if(i==3||i==6||i==9)
        {
            continue;
        }
        printf("\ni=%d",i);
    }
    return 0;
}
