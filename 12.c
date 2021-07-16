#include<stdio.h>
int main()
{
    int ele,pos,i,n;
    printf("enter a number of array ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter a number ");
        scanf("%d",&arr[i]);
    }
    printf("enter a element to enter :");
    scanf("%d",&ele);
    printf("enter a position to enter :");
    scanf("%d",&pos);
    
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1] =arr[i];
    }

    arr[pos]=ele;
    for(i=0;i<=n;i++)
    {
     printf("%d\t",arr[i]);
    }
    return 0;
}