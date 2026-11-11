/*#include<stdio.h>

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
    }*/


   /* #include<stdio.h>

    int main()
    {
        int ar[7]={4,4,3,3,2,1,5};
        int i, sum=0;
        printf("\nArray element are");
        for(i=0; i<=7;i++)
        {
            printf("\n%d",ar[i]);
            sum=sum+ar[i];
        }
        
            printf("\nsum of array elements=%d",sum);
            
    }*/


  /*  #include<stdio.h>

    int main()
    {
        int ar[6]={8,3,5,6,2,1,};
        int i,even=0, odd=0;
        printf("\nArray element are");
        for ( i = 0; i <= 5; i++)
        {
            printf("\n%d",ar[i]);
            if(ar[i]%2==0)
            even++;
            else
            odd++;
        }
            printf("\nTotal even array element=%d",even);
            printf("\nTotal odd array element=%d",odd);
            return 0;
    }*/



/*#include<stdio.h>

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
}*/


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