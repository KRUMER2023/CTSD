#include <stdio.h>
#include<conio.h>

int main()
{
    int num[4] = {64, 25, 12};
    int j,el;

    printf("Original array: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", num[i]);
    }

    puts("\nEnter position:");
    scanf("%d",&j);
    puts("Element : ");
    scanf("%d",&el);


    for(int i = 2 ; i>=j ;i-- )
    {
        if(i!=j)
        {
            num[i+1]=num[i];
        }
        else
        {
            num[i+1]=num[i];
            num[i]=el;

        }

    }


    printf("edited array: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", num[i]);
    }


    return 0;
}
