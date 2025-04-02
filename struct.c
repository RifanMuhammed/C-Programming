#include<stdio.h>
typedef struct{
    char name[50];
    int rollno;
    float cgpa;
}student;
int main(){
    student s[10];
    int limit;
    printf("enter the number of students:");
    scanf("%d",&limit);
    for(int i=0;i<=limit-1;i++){
        printf("enter your name:");
        scanf("%s",s[i].name);
        printf("enter your roll number:");
        scanf("%d",&s[i].rollno);
        printf("enter your CGPA:");
        scanf("%f",&s[i].cgpa);
    }
    for(int i=0;i<=limit-1;i++){
        printf("\nName:%s",s[i].name);
        printf("\nroll number:%d",s[i].rollno);
        printf("\ncgpa:%f",s[i].cgpa);
    }
    return 0;
}
