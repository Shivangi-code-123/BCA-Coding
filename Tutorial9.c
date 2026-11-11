#include<stdio.h>
#define PI 3.15
int main()
{
    int a = 8;
   const float b = 34.444;
//    printf("%f", PI);
   //PI = 34.444;// can not do this since b is a constant
   printf("my backslash\\n %f", PI);
    //b = 84.2; //cannot do this since a constant
    //printf("Hello world\n,");
    // printf("The value of a is %d and the value of b is %f\n", a,b);
   // printf("%1.2f this", b);
    return 0;
}