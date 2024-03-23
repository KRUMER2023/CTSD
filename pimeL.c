#include<stdio.h>
#include<conio.h>

int check(int);

void main()
{
    int n,prime;
    puts("enter:");
    scanf("%d",&n);
    prime = check(n);

    for(int j=1;j<=n;j++)
    {
        check(j);

    }
    getch();
}

int check(int n)
{
    int i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            return 0;
        }
        else
        {
            i++;
        }
        return 1;
    }
}
