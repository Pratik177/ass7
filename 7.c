#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {printf("enter a number %d :",i+1);
    scanf("%d",&a[i]);}
    for(i=0;i<5;i++)
    {
        if (a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    printf("the max number is %d",a[0]);
    return 0;
}