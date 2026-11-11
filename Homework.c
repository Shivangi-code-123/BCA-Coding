#include<stdio.h>

int main()
{
    int subject;
    printf("Who are you passed subject?\n");
    printf("1. only maths\n");
    printf("2. only science\n");
    printf("3. only maths ,science both \n");
    printf("4. none of them\n");
    
    printf("Choose your option (1,2,3 and 4 )");
    scanf("%d", &subject);
  
    if (subject==1)
{
    printf("you have win 15$\n");
}
    else if (subject==2)
    {  
        printf("you have win 15$\n");
    }
    else if (subject==3)
    {
        printf(" you have win 50$\n");
    }
    else if (subject==4)
    {
        printf ("you will not get any gift");
    }

        return 0;
        }