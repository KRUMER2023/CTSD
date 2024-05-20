#include<stdio.h>

void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    puts(" ");
}

void main()
{
    int a[]={45,1,32,95,7,0,7,15};
    int l=sizeof(a)/sizeof(int);
    int temp;

    puts("Original array:");
    print(a,l);

    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l-1;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    puts("Sorted array:");
    print(a,l);
}
