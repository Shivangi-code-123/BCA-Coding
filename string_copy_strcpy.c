  #include<stdio.h>
    #include<string.h>

    int main()
    {
        char str1[10],str2[10];
        printf("\nEnter your name");
        scanf("%s",str1);
        strcpy(str2,str1);
        printf("\nYour copied string=%s",str2);
        return 0;
    }