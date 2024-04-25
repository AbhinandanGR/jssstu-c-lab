/* Part : A7

To determine whether a given number is “Odd‟ or„ Even‟ and print the message
NUMBER IS EVEN or NUMBER IS ODD           */

#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	if(n%2 == 0)
	{
		printf("Number is even or zero\n");
	}
	
	else 
	{
		printf("Number is odd\n");
	}
	
	return 0;
}
