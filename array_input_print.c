#include<stdio.h>

int main()
{
    int ar[4];
    int i;
    printf("\nEnter any four integer array element");
    for ( i = 0; i <=3; i++)
    {
        scanf("%d",&ar[i]);
    }
        printf("\nArray element are");
        for ( i = 0; i <=3; i++)
        {
            printf("\n%d",ar[i]);
        }
            return 0;
    }