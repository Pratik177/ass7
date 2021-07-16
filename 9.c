#include <stdio.h>
 
int main()
{
	int arr[10], i, j,size, Count = 0;
    printf("enter the size of array :");
    scanf("%d",&size);
	for (i = 0; i < size; i++)
    {
        printf("enter a number :");
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i <size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("\n Total Number of repeated  Elements in this Array  =  %d ", Count);

return 0;
}