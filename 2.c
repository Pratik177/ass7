#include<stdio.h>
int main()
{
    int a[10],i,even=0,odd=0;
    for(i=0;i<10;i++)
    {
        printf("enter a number :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
    printf("%d",a[i]);
    if (a[i]%2==0)
    {
        even ++;
    }
    else{
        odd++;
       }
    }
    printf("\nthe total even number is:%d\n",even);
    printf("the total odd number is :%d\n",odd);
    
    return 0;
    
}