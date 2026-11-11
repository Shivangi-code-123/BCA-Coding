#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=15;
    int*ptr;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMamory Allocation are Failed");
        return 1;
    }
        for(int i=0;i<n;i++)
        {
        ptr[i]=(i+1)*10;
    }
    printf("\nThe elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }
        printf("\n");
        free(ptr);
        return 0;
}