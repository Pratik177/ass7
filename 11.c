#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a number of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter a number %d : ", i+1);
        scanf("%d",&arr[i]);
    }
    int temp=0;
    int length =sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] =arr[j];
                arr[j]=temp;
            }
        }
    }
    printf(("\n"));
    printf("the decending order is :");
    for(i=0;i<length;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
