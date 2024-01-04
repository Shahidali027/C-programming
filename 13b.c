#include<stdio.h>
int main()
{
    union student {int rollno;char name[50];float avg;};
    int n,i;
    union student s;
    printf("Enter the student Roll no.\n");
    scanf("%d",&s.rollno);
    printf("\nStudent Roll No. %d\n",s.rollno);
    printf("Enter the student name:\n");
    scanf("%s",s.name);
    printf("\nStudent name: %s",s.name);
    printf("\nEnter the student average: \n");
    scanf("%f",&s.avg);
    printf("\nStudent average: %f\n",s.avg);
    return 0;
}