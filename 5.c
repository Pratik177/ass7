#include<stdio.h>
int main()
{
    int i,num[10],even[10],odd[10],j=0,k=0;
    for(i=0;i<10;i++)
    {
        printf("enter a number %d  :",i+1);
        scanf("%d",&num[i]);
    }
    for (i=0;i<10;i++)
    {
        if(num[i] % 2 == 0)
        {
            even[j]=num[i];

            j++;
        }
        else
        {
            odd[k]=num[i];
            k++;
        }
    }
        printf("the even number is :");
        for(i=0;i<j;i++)
        {
        printf("%d\t",even[i]);
        }
        printf("\nthe odd number is :");
        for(i=0;i<k;i++)
        {
            printf("%d\t",odd[i]);
        }
        printf("\n");
        return 0;
    }
