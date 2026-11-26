#include<stdio.h>

int main()
{
    int a,b;
    void swap(int* ,int* );
    printf("\nEnter any two number");
    scanf("%d %d",&a,&b);
    printf("\nbefore function calling the value is");
    printf("\na=%d\tb=%d",a,b);
    swap(&a,&b);
    printf("\nafter function calling the value is");
    printf("\na=%d\tb=%d",a,b);
    return 0;
}
    void swap(int*x,int*y)
    {
        int z;
        z=*x;
        *x=*y;
        *y=z;
    }




