/* Part : B6

To generate and print all the prime numbers between range N1 and N2, where
‘N1’ and ‘N2’ are value supplied by the user.    */

#include<stdio.h>
int main()
{
	int i,n,n1,n2,flag;
	
	printf("Enter the lower and upper limit : ");
	scanf("%d %d",&n1,&n2);
	
	for( n = n1 ; n <= n2 ; n++)
	{
		flag = 1;
		for(i =2 ; i <=n/2 ; i++)
		{
			if(n%i == 0)
			{
				flag = 0;
				break;
			}
		}
		
		if(flag)
			printf("%d\t",n);
	}
	
	printf("\n");
	
	return 0;
	
}	
