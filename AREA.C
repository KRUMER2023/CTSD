#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int l,b,area,perimeter,diagonal;
	printf("ENTER THE LENGTH:\n");
	scanf("%d",&l);
	printf("ENTER THE BREADTH:\n");
	scanf("%d",&b);
	area=l*b;
	perimeter=2*(l+b);
	diagonal=sqrt((l*l)+(b*b));
	printf("\n--------------------------------\n");
	printf("THE AREA OF RECTANGLE      = %d\n",area);
	printf("THE PERIMETER OF RECTANGLE = %d\n",perimeter);
	printf("THE DIAGONAL OF RECTANGLE  = %d",diagonal);



	getch();
	clrscr();
	return 0;
}