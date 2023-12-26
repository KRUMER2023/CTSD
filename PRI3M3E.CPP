#include<stdio.h>
#include<conio.h>

int main()
{
	int n,veri[5]={1,2,3,5,7};
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{ int check=0;
		for(int j=1;j<10;j++)
		{
			if(i%j!=0)
			{
			  check++;
			}
		}
		if(check==9)
		{
		printf("%d\n",i);
		}         	}
	getch();
	clrscr();
	return 0;
}
