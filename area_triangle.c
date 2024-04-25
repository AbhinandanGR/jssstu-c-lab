/* Part: A2

To find the area of a Triangle with 3 sides given using formula,
Area=√(s(s-a)(s-b)(s-c))
where a, b and c are lengths of sides of Triangle, and s = (a+b+c) / 2   */

#include<stdio.h>
#include<math.h>
int main()

{
	float a,b,c,s,area;
	
	printf("Enter the three sides of a triangle :\n");
	scanf("%f %f %f", &a, &b, &c);
	
	s = (a + b +c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("The area of the triangle is %f\n",area);
	
	return 0;
	
}
