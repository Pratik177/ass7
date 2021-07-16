#include<stdio.h>
int main()
{
    int a[10],i,b[10];
       for(i=0;i<10;i++)
    {
        printf("enter a number ");
        scanf("%d",&a[i]);
    }
       for(i=0;i<10;i++)
        {
            b[i]=a[i];
        }
        printf("\n initial number is :");
         for(i=0;i<10;i++)
         {
             printf("%d\t",a[i]);
         }
            printf("\nnumber in reverse order is :");
          for(i=9;i>=0;i--)
          {
              printf("%d\t",b[i]);
          }
          return 0;

}