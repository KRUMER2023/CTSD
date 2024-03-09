#include<stdio.h>
#include<conio.h>

void main()
{
	float r,h,area,vol;
	printf("Enter the Radius of Cylinder:-\n");
	scanf("%f",&r);
	printf("Enter the height of Cylinder:-\n");
	scanf("%f",&h);
	area=2*3.14*r;
	vol=3.14*r*r*h;
	printf("The area of cylinder:- %0.2f\n",area);
	printf("The volume of cylinder:- %0.2f\n",vol);
	getch();
	clrscr();
}