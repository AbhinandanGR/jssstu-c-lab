/* Part: A3

Given the values of the variables x, y and z, write a program to rotate their values
such that x has the value of y, y has the value of z, and z has the value of x.      */

#include<stdio.h>
int main()
{
	int x,y,z,temp;
	
	printf("Enter any three numbers :\n");
	scanf("%d %d %d", &x, &y, &z);
	
	printf("Before interchanging the values of X = %d\tY = %d\tZ = %d\n",x,y,z);
	
	temp = x;
	x = y;
	y = z;
	z = temp;
	
	printf("After interchanging the values of X = %d\tY = %d\tZ = %d\n",x,y,z);
	
	return 0;
	
}
