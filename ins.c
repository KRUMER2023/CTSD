#include<stdio.h>

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    puts(" ");
}

void inser(int *a,int l)
{
    int key,i,j;
    for(i=0;i<l;i++)
    {
        key=a[i],j=i-1;

        while(j>=0 && key<=a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

void main()
{
    int a[]={45,1,32,95,7,0,7,15};
    int l=sizeof(a)/sizeof(int);
    int temp;

    puts("Original array:");
    print(a,l);

    inser(a,l);

    puts("Sorted array:");
    print(a,l);
}
