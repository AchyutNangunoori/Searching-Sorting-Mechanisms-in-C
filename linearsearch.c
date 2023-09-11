#include<stdio.h>
int search(int, int[], int);
void main()
{
    int n,k;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of the array\n");
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
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        return(i+1);
    }
    return(-1);
}