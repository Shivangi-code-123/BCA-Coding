//single student
/*#include<stdio.h>

struct student
{
    int roll;
    char name[20];
};
    int main()
    {
        struct student s1;
        printf("\nEnter roll number");
        scanf("%d",&s1.roll);
        printf("\nEnter name");
        scanf("%s",s1.name);
        printf("\nRoll number : %d",s1. roll);
        printf("\nName :%s\n",s1.name);
        return 0;
    }*/

    //multiple student
   /* #include<stdio.h>

    struct student{
        int roll;
        char name[70];
    };
         int main(){
        struct student s[6];
        int i;
    for(i=0; i < 6; i++){
    printf("\n Enter roll for student %d: ",i+1);
    scanf("%d", &s[i].roll);
    fflush(stdin);
    printf("\nEnter Name for student %d:", i+1);
    scanf("  %[^\n]", s[i].name);
    fflush(stdin);
         }
         printf("\n---student Details---\n");
         for(i=0; i<6; i++){
            printf("student %d -> roll: %d, Name: %s\n",i+1, s[i].roll, s[i].name);
         }
         return 0;
        }*/

        
        //structure with pointer
        #include<stdio.h>
        struct student{
            int roll;
            char name[50];
        };
            int main()
            {
                struct student s1,s2;
                printf("\nEnter 1st student information\n");
                printf("Enter student roll and name: ");
                scanf("%d",&s1.roll);
                scanf("%s",s1.name);
                printf("Enter 2nd student information\n");
                printf("\nEnter 2nd student roll and name: ");
                scanf("%d",&s2.roll);
                scanf("%s",s2.name);
                printf("\n---student Detail---\n");
                printf("student 1->roll: %d,Name: %s\n",s1.roll,s1.name);
                printf("student 2->roll: %d,Name: %s\n",s2.roll,s2.name);
                return 0;
            }