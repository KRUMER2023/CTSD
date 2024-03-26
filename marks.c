#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float marks[5];
};
int main()
{
    int n;
    struct student students[n];

    puts("Enter the no. of student you want to enter data");
    scanf("%d",&n);

    for(int j=0;j<n;j++)
    {
        printf("Enter Name of student %d : ",j+1);
        scanf("%s", &students[j].name);
        printf("Enter Roll No. of student %d : ",j+1);
        scanf("%d", &students[j].roll);

        for(int i=0;i<5;i++)
        {
            printf("Enter marks of subject %d :\t",i+1);
            scanf("%f",&students[j].marks[i]);
        }
        puts("\n\n");

    }

    for(int j=0;j<n;j++)
    {
        printf("Name of student %d : %s\n",j+1,&students[j].name);
        printf("Roll no. of student %d : %d\n",j+1,&students[j].roll);
        for(int i=0;i<5;i++)
        {
            printf("Marks of subject %d is :%0.2f\n",j+1,students[j].marks[i]);
        }

    }

    return 0;
}
