#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("enter a number :");
        scanf("%d",&arr[i]);
    }
   
        for(i=0;i<10;i++)
       sum +=arr[i];
        printf("the avg sum of number is: %d\n",sum);
        return 0;
}