#include<stdio.h>
int main()
{
    int a[10], i,b[10];
    for(i=0;i<10;i++)
    {
    printf("enter a number:");
    scanf("%d",(a+i));
    }
    for(i=0;i<10;i++)
    {
        *(b+i)=*(a+i);
    }
    printf("the copied to another arrayy is :%d",(b+i));
    
    return 0;

}