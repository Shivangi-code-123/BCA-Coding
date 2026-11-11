#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=3;
    int*ptr;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
     {
        printf("Memory Allocation failed\n");
        return 1;
     }
        ptr[0]=10;
        ptr[1]=20;
        ptr[2]=30;
        printf("\nThe elements are:-\n%d\n%d\n%d\n",ptr[0],ptr[1],ptr[2]);
        free(ptr);
        ptr=NULL;
        printf("\nMemory successfully frees and pointer is now null");
        return 0;
    
}