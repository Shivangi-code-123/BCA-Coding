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