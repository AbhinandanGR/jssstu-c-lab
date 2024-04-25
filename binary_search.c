/* Part : A8

To input N integer numbers in ascending order into a single dimension array, and
then to perform BINARY SEARCH for a given Key integer number and report
success or failure in the form of a suitable message.         */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[10],i,j,key,n,start,end,mid,temp;
	
	printf("\nEnter the size of an Array - A:\n");
	scanf("%d",&n);
	
	printf("Enter %d numbers into Array-A in Ascending order only:\n",n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}
	
	printf("Enter the Key Element to be searched in Array-A:\n");
	scanf("%d",&key);
	
	start = 0;
	end = n-1;
	while(start<=end)
	{
		mid = (start + end)/2;
		if(key == A[mid])
		{
			printf("Key element %d is found at position %d\n",A[mid],mid + 1);
			exit(0);
		}
		
		else if(key > A[mid])
			start = mid +1;
		
		else 
			end = mid -1;
	}
	
	if(start > end)
	{
		printf("Key element is not founnd\n");
	}
	
	return 0;
}



