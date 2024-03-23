#include <stdio.h>
#include<conio.h>
#include<windows.h>


int main()
{
    //declaring array
    int n,num[100];//giving the temporary range to array
    int p,j,el;


    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,11);


    //taking length from user
    puts("Enter array lenght:");
    scanf("%d",&n);

    //taking elements
    for (int m=0;m<n;m++)
    {
        printf("Enter %dth element: \n",m);
        scanf("%d",&num[m]);
    }

    //printing array made by user
    printf("Original array:  ");
    for (int i=0;i<n;i++)
    {
        printf("%d ", num[i]);
    }

    //editing code
    label:
    puts("\n\nThis is editing time Enter position of element:");
    scanf("%d",&j);
    puts("Element : ");
    scanf("%d",&el);

    n=n+1;
    for(int i=n;i>=j;i--)
    {   //copying present element to next element at +1 next index
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
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }


    que:

    puts("\n\nagain want to edit (0 to yes , 1 to no):");
    scanf("%d",&p);
    if(p==0)
    {
        goto label;
    }
    else if(p==1)
    {
        puts("GOOD BYE..........");
    }
    else
    {
        puts("invalid choice...");
        goto que;
    }

    return 0;
    getch();
}
