/*  Part : A5

To read floating-pointing number and then displays the right-most digit of the
integral part of the number.   */

#include<stdio.h>
int main()
{
	float float_num;
	int integral_part,right_digit;
	
	printf("Enter the real number:\n");
	scanf("%f",&float_num);
	
	integral_part = float_num;
	right_digit = integral_part % 10;
	
	printf("Right most digit of an integral part of a real number %f is %d\n",float_num,right_digit);
	
	return 0;
	
}
