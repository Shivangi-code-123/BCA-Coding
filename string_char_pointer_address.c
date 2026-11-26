  #include<stdio.h>
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
    }