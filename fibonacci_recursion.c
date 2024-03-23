#include<stdio.h>
#include<conio.h>

// 0 1 1 2 3 5 8 13

int fibo(int n)
{
    if(n==1||n==2)
    {
        return n-1;
    }
    else
    {
        printf("%d  ",n);
        return fibo((n-1)+(n-2));
    }
}

int main()
{
    int num;
    puts("Enter number:");
    scanf("%d",&num);
    printf("the fibonacci series upto of %d is",num);
    return 0;
    getch();
}
