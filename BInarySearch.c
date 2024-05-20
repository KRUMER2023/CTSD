#include<stdio.h>

void print(int a[],int n)
{



    puts("Index:");
    for(int i=0;i<n;i++)
    {
        if(i<10) printf("0");
        printf("%d ",i);
    }

    puts(" ");
    puts("Element:");
    for(int i=0;i<n;i++)
    {
        if(a[i]<10) printf("0");
        printf("%d ",a[i]);
    }
    puts(" ");
}

void binar(int *a,int lo,int hi,int tar)
{
    int mid;

    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(a[mid]==tar)
        {
            printf("Element %d found at index: %d",tar,mid);
            return;

        }
        if(a[mid]<tar)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    puts("Element not found.....");

}

void main()
{
    int a[]={10,25,36,45,85,96,100,101};
    int len=sizeof(a)/sizeof(a[0]);
    int target;

    puts("Original Array:");
    print(a,len);

    puts("Which element you want to search:");
    scanf("%d",&target);

    binar(a,0,len-1,target);
}
