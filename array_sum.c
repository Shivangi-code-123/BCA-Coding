  #include<stdio.h>

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
            
    }
