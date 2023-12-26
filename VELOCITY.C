#include<stdio.h>
#include<conio.h>

void main()
{
	float v,u,a,t,s;
	printf("CALCULATING VELOCITY \n ENTER INITIAL VELOCITY:\n");
	scanf("%f",&u);
	printf("ENTER ACCELERATION:\n");
	scanf("%f",&a);
	printf("ENTER TIME TAKEN:\n");
	scanf("%f",&t);
	v=u+(a*t);
	s=(u*t)+(0.5*a*t*t);
	printf("THE FINAL VELOCITY: %0.2f\n",v);
	printf("THE DISTANCE: %0.2f\n",s);
	getch();
	clrscr();
}

