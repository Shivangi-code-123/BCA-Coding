#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=2;
    int*ptr;
    ptr=(int*)malloc(n*sizeof(int));
    ptr[0]=10;
    ptr[1]=20;
    printf("\nInvial value=%d,%d\n",ptr[0],ptr[1]);
    ptr=(int*)realloc(ptr,4*sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory Allocation Failed");
        return 1;
    }
    ptr[2]=30;
    ptr[3]=40;
    printf("\nThe 4 New updated elements are :-\n");
    for(int i=1;i<4;i++)
    {
        printf("%d\n",ptr[i]);
    }
    printf("\n");
    free(ptr);
    ptr==NULL;
    return 0;
}