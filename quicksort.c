#include<stdio.h>
void sort(int,int[],int,int);
void swap(int*, int*);
void main()
{
    int n,left,right;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of Array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    left=0;
    right=n;
    printf("Before Sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    sort(n,a,left,right);
    printf("After Sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void sort(int n, int a[n], int left, int right)
{
    int pivot, la, ra;
    la=left;
    ra=right;
    pivot=a[(left+right)/2];
    do
    {
        while(a[ra]>pivot)
        ra--;
        while(a[la]<pivot)
        la++;
        if(la<=ra)
        {
            swap(&a[la],&a[ra]);
            la++;
            ra--;
        }
    }while(ra>=la);
    if(left<ra)
    sort(n,a,left,ra);
    if(la<right)
    sort(n,a,la,right);
}
void swap(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}