//Part: A1

/* To find the volume of a Sphere using the formula, Volume=4 / 3 Πr3  */

#include<stdio.h>
int main()
{
	float r,v;
	
	printf("Enter the Radius of the Sphere \n");
	scanf("%f", &r);
	
	v = (4.0/3) * (22.0/7) * r * r *r;
	
	printf("The volume of the sphere is %f\n",v);
	
	return 0;
	
}
