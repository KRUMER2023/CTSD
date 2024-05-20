#include<stdio.h>

void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    puts(" ");
}

void sele(int a[],int l)
{
    int min,temp;
    for(int i=0;i<l;i++)
    {
        min=i;
        for(int j=i+1;j<l;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;

    }
}

void main()
{
    int a[]={25,1,31,92,62,2,46,17};
    int l=sizeof(a)/sizeof(int);

    puts("Original Array:");
    print(a,l);

    sele(a,l);

    puts("Sorted Array:");
    print(a,l);
}
