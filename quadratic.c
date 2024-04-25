/*  Part : B1

To compute all the roots of a quadratic equation by accepting the non-zero coefficients. Print appropriate messages. */

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,disc;
	float r1,r2;
	
	NEXT:
	printf("Enter the non-zero co-efficients:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a == 0 || b == 0 || c == 0)
	{
		printf("!!!Invalid input/Co-efficients....\n");
		goto NEXT;
	}
	
	disc = b * b -4 * a * c;
	
	if(disc < 0)
	{
		printf("Roots are Imaginary...\n");
		printf("Root-1 = %.2f + %.2fi\n",-b/(float)(2*a),sqrt(-disc)/(2*a));
		printf("Root-1 = %.2f - %.2fi\n",-b/(float)(2*a),sqrt(-disc)/(2*a));
	}
	
	else if(disc > 0)
	{
		r1 = (-b + sqrt(disc)) / (2*a);
		r2 = (-b - sqrt(disc)) / (2*a);
		printf("Roors are Real and Distinct\n");
		printf("Root-1 = %.2f\n",r1);
		printf("Root-2 = %.2f\n",r2);
	}
	
	else 
	{
		r1 = r2 =-b/(2*a);
		printf("Roots are Real and Equal\n");
		printf("Root-1 = %.2f\n",r1);
		printf("Root-2 = %.2f\n",r2);
	}
	
	return 0;

}
		
