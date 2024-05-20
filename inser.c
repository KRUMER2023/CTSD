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
    //loop for taking the ele. as key every time
    for(i=0;i<l;i++)
    {
        key=a[i],j=i-1;
        //loop for checking if key<=any ele
        //and if then the elements are swift to next place to make place for key
        //and insert key to right position
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
    int a[]={10,2,35,96,41,3,84,1};
    int l=sizeof(a)/sizeof(a[0]);

    puts("Original array:");
    print(a,l);

    inser(a,l);

    puts("Sorted array:");
    print(a,l);
}
