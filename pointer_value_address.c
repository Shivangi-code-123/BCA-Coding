#include<stdio.h>

int main()
{
    int a, *ptr;
    printf("\nenter any number");
    scanf("%d",&a);
    ptr=&a;
    printf("\nvalue of a=%d",a);
    printf("\nvalue of a=%d",*ptr);
    printf("\nvalue of a=%d",*(&a));
    printf("\naddress of a=%u",&a);
    printf("\naddress of a=%u",ptr);
    printf("\naddress of ptr=%u",&ptr);
    return 0;
}

