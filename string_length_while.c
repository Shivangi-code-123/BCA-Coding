#include<stdio.h>

int main()
{
    char str[10];
    int len=0,i=0;
    printf("\nEnter your name");
    scanf("%s",str);
    printf("\nYour name=%s",str);
    while (str[i]!='\0')
    {
        len++;
        i++;
    }
        printf("\n length of string=%d",len);
        
            return 0;
    }
