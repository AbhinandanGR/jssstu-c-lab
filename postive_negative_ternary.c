/* Part : A4

Using “ternary‟ operator ,check whether a given number is Positive or Negative.     */

#include<stdio.h>
int main()
{
	int number;
	
	printf("Enter an integer number :\n");
	scanf("%d",&number);
	
	(number > 0)? printf("%d is positve number\n",number): printf("%d is negative number or zero\n",number);
	
	return 0;
}
