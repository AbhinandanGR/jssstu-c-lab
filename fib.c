/* Part : B2

To generate and print the first „N‟ Fibonacci numbers such that Fn = F(n-1) +
F(n-2) where n>2. A Fibonacci sequence is defined as “the first and second
terms in the sequence are 0 and 1. Subsequent terms are found by adding the
preceding two terms in the sequence”.    */

#include<stdio.h>
int main()
{
	int f1,f2,f,i,n;
	
	printf("Enter the number of terms:\n");
	scanf("%d",&n);
	
	f = 0;
	f1 = 0;
	f2 = 1;
	
	for(i = 1; i <= n; i++)
	{
		printf("%d\t",f);
		f1 = f2;
		f2 = f;
		f = f1 + f2;
	}
	
	printf("\n");
	
	return 0;
}
