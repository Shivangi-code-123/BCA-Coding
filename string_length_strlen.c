#include<stdio.h>
    #include<string.h>

    int main()
    {
        char str[10];
        printf("\nEnter your name");
        scanf("%s",str);
        printf("\nYour entered string=%s",str);
        printf("\nlength of the string=%d",strlen(str));
        return 0;
    }