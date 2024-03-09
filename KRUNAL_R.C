#include<stdio.h>
#include<conio.h>
#include<math.h>

float main()
{
	float l,b,area,perimeter,diagonal;
	printf("ENTER THE LENGTH:\n");
	scanf("%f",&l);
	printf("ENTER THE BREADTH:\n");
	scanf("%f",&b);
	area=l*b;
	perimeter=2*(l+b);
	diagonal=sqrt((l*l)+(b*b));
	printf("\n--------------------------------\n");
	printf("THE AREA OF RECTANGLE      = %f\n",area);
	printf("THE PERIMETER OF RECTANGLE = %f\n",perimeter);
	printf("THE DIAGONAL OF RECTANGLE  = %f",diagonal);

	getch();
	clrscr();
	return 0;

}