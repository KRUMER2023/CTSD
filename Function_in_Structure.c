#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct st
{
    char name[50];
    int roll;
    float marks;
};

void show(struct st in)
{
    printf("Name: %s\n",in.name);
    printf("Roll No. :- %d\n",in.roll);
    printf("Marks : %0.2f\n",in.marks);
}

int main()
{
    struct st detl;

    puts("Enter name:");
    scanf("%s", &detl.name);
    puts("Enter roll no. :");
    scanf("%d", &detl.roll);
    puts("Enter marks:");
    scanf("%f", &detl.marks);

    show(detl);

    return 0;
}
