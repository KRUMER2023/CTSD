#include<stdio.h>
#include<conio.h>
int main()
{
	int num, sum=0;
	printf("enter any number to find sum of digits:");
	scanf("%d",&num);

	while(num!=0)
	{
		sum=sum+num%10;
		num =num /10;
	}
	printf("sum of digits=%d",sum);
	getch();
	clrscr();
	return 0;
}