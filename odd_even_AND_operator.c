/* Part : A8

Using “&‟ operator, check whether a given number is Odd or Even.  */

#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	(n&1)? printf("%d is odd\n",n) : printf("%d is even or zero\n",n);
	
	return 0;
	
}
