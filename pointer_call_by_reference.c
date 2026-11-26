#include<stdio.h>

int main()
{
    int a;
    void display(int*);
    printf("\nEnter any number");
    scanf("%d",&a);
    display(&a);
    return 0;
}
    void display(int *m)
{
    printf("\nvalue of a=%d",*m);
}
