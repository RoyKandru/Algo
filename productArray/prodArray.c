/*
i/p : 3 2 4 5 3
o/p : 120 180 90 72 120 

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<stdio.h>
#include<string.h>

void productArr(int arr[], int len)
{
	int prod[len];
	int left=1, right=1, i=0;

	printf("i/p: ");
	for(i=0;i<len;i++)
        {
                printf("  %d", arr[i]);
        }
        printf("\n");

	for(i=0;i<len;i++)
	{
		prod[i] = left;
		left  = left * arr[i];
	}
	
	right =1;
	for(i=len-1;i>=0;i--)
	{
		prod[i] = prod[i] * right;
		right = right * arr[i];	
	}

	printf("o/p: ");
	for(i=0;i<len;i++)
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
