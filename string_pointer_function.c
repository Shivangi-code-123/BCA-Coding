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