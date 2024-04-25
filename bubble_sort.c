/* Part : B7

To input N integer numbers into a single dimension array, sort them in to
ascending order using BUBBLE SORT technique, and then to print both the
given array and the sorted array with suitable headings.     */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[100],i,j,n,temp;
	system("clear");
	
	printf("Enter the size of the Array-A:\n");
	scanf("%d",&n);
	
	printf("Input %d integer into Array-A:\n",n);
	
	for(i = 0; i<n ; i++)
	{
		scanf("%d",&A[i]);
	}
	
	printf("Unsorted Elements/Before sorting:\n");
	for(i = 0; i<n ; i++)
	{
		printf("%d\t",A[i]);
		
	}
	
	for(i=1; i<n; i++)
	{
		for(j=0 ; j <n-i; j++)
		{
			if(A[j] > A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	
	printf("\nSorted elements/After sorting:\n");
	for(i = 0; i<n ; i++)
	{
		printf("%d\t",A[i]);
	}
	
	printf("\n");
	
	return 0;
	
}
		
