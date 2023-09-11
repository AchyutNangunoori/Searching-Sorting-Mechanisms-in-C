#include<stdio.h>
int search(int, int[], int);
void main()
{
    int n,k;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of the array in a sorted form\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched for\n");
    scanf("%d",&k);
    int res=search(n,a,k);
    if(res==-1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at position %d\n",res);
    }
}
int search(int n, int a[n], int k)
{
    int beg=0, end=(n-1), mid;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        //printf("Mid Value: %d\n",mid);
        if(k==a[mid])
        {
            return(mid+1);
        }
        else if(k<a[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    return(-1);
}