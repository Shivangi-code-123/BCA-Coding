/*#include<stdio.h>

int main()
{
    char str[10];
    printf("\n Enter your name");
    scanf("%s",str);
    printf("\nYour name=%s",str);
    return 0;
}*/


/*#include<stdio.h>

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
    }*/


  /*  #include<stdio.h>
    #include<string.h>

    int main()
    {
        char str[10];
        printf("\nEnter your name");
        scanf("%s",str);
        printf("\nYour entered string=%s",str);
        printf("\nlength of the string=%d",strlen(str));
        return 0;
    }*/


    /*#include<stdio.h>
    #include<string.h>

    int main()
    {
        char str1[10],str2[10];
        printf("\nEnter your name");
        scanf("%s",str1);
        strcpy(str2,str1);
        printf("\nYour copied string=%s",str2);
        return 0;
    }*/


   /* #include<stdio.h>
    #include<string.h>

    int main()
    {
        char str[10];
        printf("\nEnter any string in lowercase");
        scanf("%s",str);
        printf("\nYour enter string=%s",str);
        printf("\nstring in uppercase=%s",strlwr(str));
        return 0;
        printf("\nEnter any string in uppercase");
        scanf("%s",str);
        printf("\nstring in lowercase=%s",strupr(str));
        return 0;
    }*/


  /*  #include<stdio.h>
    #include<string.h>

    int main()
    {
        char str[10]="india";
        int i;
        char*ptr;
        ptr=str;
        for ( i = 0; str[i]!='\0'; i++)
        {
            printf("\n%c\t%u",str[i],ptr);
            ptr++;
        }
        return 0;
    }*/

    #include<stdio.h>
    #include<string.h>

    int main()
    {
        char str[10]="Ghazipur";
        void disp(char*);
        printf("\n\n\n\n\n");
        disp(str);
        return 0;
    }
    void disp(char*ptr)
    {
        while(*ptr!='\0')
        {
            printf("%c\t",*ptr);
            printf("\n\n\n");
            ptr++;
        }
    }