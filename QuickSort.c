#include<stdio.h>
#include<conio.h>

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    puts(" ");
}

void quick(int a[],int lo,int hi)
{
    if(lo<hi)
    {
        int locpi=lo,pivot=a[locpi];
        int i=lo+1,j=hi,temp;
        while(j>i)
        {
            while(a[i]<=pivot)
            {
                i++;
            }
            while(a[j]>pivot)
            {
                j--;
            }
            if(j>i)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[locpi];
        a[locpi]=a[j];
        a[j]=temp;
        locpi=j;

        quick(a,lo,locpi-1);
        quick(a,locpi+1,hi);
    }


}

void main()
{
    int a[]={63,1,98,65,41,21,11,10};
    int len=sizeof(a)/sizeof(a[0]);

    puts("Original Array:");
    print(a,len);

    quick(a,0,len-1);

    puts("Sorted Array:");
    print(a,len);

    getch();
}
