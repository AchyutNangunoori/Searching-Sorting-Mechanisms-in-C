#include<stdio.h>
void sort(int,int[]);
void main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of Array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(n,a);
}
void sort(int n,int a[n])
{
    int j;
    printf("Before Sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        j=i;
        while(j>0&&a[j-1]>temp)
        {
            a[j]=a[j-1];
            j=j-1;
        }
        a[j]=temp;
    }
    printf("After sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}