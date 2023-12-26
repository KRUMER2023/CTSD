#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	printf("enter:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==2)
		{
			printf("%d\n",i);
		}

		if(i<=10 && i%i==0 && i%2!=0 && i!=9 )
		{
			printf("%d\n",i);
		}

		if(i>10 && i%i==0 && i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
	       {
			printf("%d\n",i);
		}
	}
	getch();
	clrscr();
	return 0;

}