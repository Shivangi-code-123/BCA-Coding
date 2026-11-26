#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE*fp;
    fp=fopen("CTA1binary.bin","wb");
    if(fp==NULL)
    {
        printf("\n file could not create");
            exit(0);
        }
        else
        {
            printf("\n file has been created");
        }
            return 0;
    }