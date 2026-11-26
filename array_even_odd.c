  #include<stdio.h>

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
    }