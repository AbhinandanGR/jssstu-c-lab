/* Part : B3

Write a program to simulate a simple calculator to perform the basic
arithmetic operations( consider the operators +,-,x,/ and % using switch
statement)   */

#include<stdio.h>
int main()
{
	int num1,num2,choice;
	
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo Division");
	printf("\nEnter the choice : ");
	scanf("%d",&choice);
	
	printf("\nEnter two numbers to perform the above operation : ");
	scanf("%d %d",&num1,&num2);
	
	switch(choice)
	{
		case 1 : printf("Result is %d + %d = %d\n",num1,num2,(num1+num2));
			break;
		case 2 : printf("Result is %d - %d = %d\n",num1,num2,(num1-num2));
			break;
		case 3 : printf("Result is %d * %d = %d\n",num1,num2,(num1*num2));
			break;
		case 4 : if(num2 != 0)
				printf("Result is %d / %d = %f\n",num1,num2,((float)num1/num2));
		
			else 
			{
				printf("!!!Divide by zero error\n");
				//goto last;
			}
			break;
			
		case 5 : printf("Result is %d %% %d = %d\n",num1,num2,(num1%num2));
			break;
	
		default : printf("!!!Invalid choice...\n");
			break;
			
	}
	
	//last:
	return 0;
	
}
		
