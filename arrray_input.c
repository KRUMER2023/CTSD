#include <stdio.h>

int main()
{
    int num[11] = {64, 25, 12, 22, 11, 36, 7, 81, 98, 17};
    int j,i;

    printf("Original array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    puts("\nEnter position:");
    scanf("%d",&j);
    puts("Element : ");
    scanf("%d",&num[j]);

    printf("edited array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }


    return 0;
}
