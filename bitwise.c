/* Part : A9

Write a program to perform the following using bitwise operators: c=a &b; d=a|b
e=~a; f = a>>n; g= a << n; h = a^b;            */

#include<stdio.h>
int main()
{
	unsigned short int a,b,c,d,e,f,g,h,n;
	
	printf("Enter any two numbers:\n");
	scanf("%hd %hd", &a, &b);
	
	c = a & b;
	printf("%d BITWISE AND %d is %d\n",a,b,c);
	
	d = a | b;
	printf("%d BITWISE OR %d is %d\n",a,b,d);
	
	e = ~a;
	printf("%d BITWISE NOT is %d\n",a,e);
	
	printf("Enter the number of BITS to be shifted:\n");
	scanf("%hd",&n);
	
	f = a >> n;
	printf("BITWISE - right shift of %d by %d is %d\n",a,n,f);
	
	g = a << n;
	printf("BITWISE - left shift of %d by %d is %d\n",a,n,g);
	
	h = a^b;
	printf("%d BITWISE XOR %d is %d\n",a,b,h);
	
	return 0;
}
