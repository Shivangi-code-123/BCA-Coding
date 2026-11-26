#include<stdio.h>

int main()
{
    int ar[3] [3]={3,5,2,5,1,6,6,8,7};
    int i,j;
    printf("\ndisplay array element in matrix form\n");
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            printf("\t%d",ar[i][j]);
        }
            printf("\n");
    }
    return 0;
}