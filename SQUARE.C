#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int l,dia,peri;
	printf("Enter a length of square:-\n");
	scanf("%d",&l);
	printf("The area of square:-   %d\n",l*l);
	dia=l*(sqrt(2));
	peri=4*l;
	printf("The length of diagonal:-  %d\n",dia);
	printf("The perimeter of square:-  %d\n",peri);

	getch();
	clrscr();


}