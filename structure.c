#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student student1;

    puts("Enter name:");
    scanf("%s", &student1.name);
    puts("Enter roll no. :");
    scanf("%d", &student1.roll);
    puts("Enter marks:");
    scanf("%f", &student1.marks);

    printf("Student Name : %s\n", student1.name);
    printf("Roll No: %d\n", student1.roll);
    printf("Marks Obtained : %0.2f", student1.marks);

    return 0;
}
