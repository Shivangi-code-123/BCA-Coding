 #include<stdio.h>
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
}