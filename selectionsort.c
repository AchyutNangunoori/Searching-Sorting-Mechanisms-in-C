#include<stdio.h>
void sort(int, int[]);
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
    //int count=0;
    printf("Before Sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int temp,min;
    for(int i=0;i<(n-1);i++)
    {
        min=i;
        for(int j=(i+1);j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        //count++;
    }
     printf("After sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    //printf("Total Number of Swappings: %d\n",count);
}