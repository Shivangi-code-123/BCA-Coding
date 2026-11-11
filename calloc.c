#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5;
    int*ptr;
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory Allocation are Failed!");
        return 1;
    }
    printf("Inital value(Allocation by calloc):\n");
    for(int i=0;i<n;i++)
    {
        printf("ptr[i]=%d\n",i,ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        ptr[i]=(i+1)*10;
    }
    printf("\nUpdate elements are :-\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }
        printf("\n");
        free(ptr);
        ptr==NULL;
        return 0;
}