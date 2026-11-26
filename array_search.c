#include<stdio.h>

int main()
{
    int ar[6]={4,5,2,5,1,8};
    int i,n,d=0;
    printf("\nArray element are");
    for ( i = 0; i <=5; i++)
    {
        printf("\n%d",ar[i]);
    }
    printf("\nenter the search element");
    scanf("%d",&n);
    for ( i = 0; i <n; i++)
    {
        if (ar[i]==n)
        {
            d++;
            break;
        }
    }
        if(d==0)
        printf("\nElement not found");
        else
        printf("\nelement found on position=%d",i);
        return 0;
}