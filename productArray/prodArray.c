//i/p : 3 2 4 5 3
//0/p : 120 180 90 72 120 

#include<stdio.h>
#include<string.h>

void productArr(int arr[], int len)
{
	int prod[len];
	int temp=1;

	printf("i/p: ");
	for(int i=0;i<len;i++)
        {
                printf("  %d", arr[i]);
        }
        printf("\n");

	for(int i=0;i<len;i++)
	{
		prod[i] = temp;
		temp = temp * arr[i];
	}
	
	temp =1;
	for(int i=len-1;i>=0;i--)
	{
		prod[i] = prod[i]*temp;
		temp = temp * arr[i];	
	}

	printf("o/p: ");
	for(int i=0;i<len;i++)
        {
                printf("%d ", prod[i]);
        }
	printf("\n");
}

int main()
{
	int arr[]={3,2,4,5,3};
	int len = 5;
	productArr(arr,len);	 
	return 0;
}
