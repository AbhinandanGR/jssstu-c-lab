/*  Part : A10

Using “ternary‟ operator, find the largest of three numbers.  */

#include<stdio.h>
int main()
{
	int a,b,c,big;
	
	printf("Enter any three number:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	big = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
	
	printf("The largest of three number is %d\n",big);
	
	return 0;
	
}
