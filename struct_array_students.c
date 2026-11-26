//multiple student
    #include<stdio.h>

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
        }
