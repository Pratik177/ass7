#include<stdio.h>
int main()
{
    int num[10],i,a,store;
    printf("enter a number for array\n");
    for(i=0;i<10;i++)
    {
        printf("enter a number ");
        scanf("%d",&num[i]);
    }
    printf("enter a  paricular number for search ");
    scanf("%d",&a);
    for(i=0;i<10;i++)
    {
        if (a==num[i])
        {
            printf("element found :%d",num[i]);
            return 0;
        }
    } 
            printf("there is no particular number ");
    
}