/*  Part : A6

To read floating-pointing number, separate and displays the integral and decimal
part of the given   */

#include<stdio.h>
int main()
{
	float real_num,decimal_num;
	int integral_part;
	
	printf("Enter the real number:\n");
	scanf("%f",&real_num);
	
	integral_part = real_num;
	decimal_num = real_num - integral_part;
	
	printf("Integral part is %d\nDecimal part is %.2f\n",integral_part,decimal_num);
	
	return 0;
}
