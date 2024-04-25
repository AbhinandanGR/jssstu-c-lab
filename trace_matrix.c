/* Part : B10

To find the trace (if matrix is square) and norm of a given matrix. Print both the
input & output matrices with suitable headings.       

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 5

void trace_matrix(int [MAX][MAX], int);
float norm_matrix(int [MAX][MAX], int, int);

int A[MAX][MAX], i, j, m, n, trace = 0, sum = 0;
float norm=0;

int main()
{  
   system("clear");
   rep:
   printf("\nEnter the Size/Order/Dim. of the Matrix-A: ");
   scanf("%d %d",&m, &n);
   
   if(m!=n)
   {
      printf("\nOrder of the Matrix-A must be Sqr. Matrix i.e. M = N...");
      goto rep;
   }
   
   printf("\nInput %d elements into MATRIX-A: ", (m*n) );
   for(i=0; i < m; i++)    
      for(j=0; j < n; j++)
         scanf("%d",&A[i][j]); 
         
   printf("\nElements of MATRIX-A:\n");
   for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
         printf("%d   ",A[i][j]); 
      
      printf("\n");
   }   
   
   //Trace of a Matrix
   trace_matrix(A, n); 
   printf("\nTrace is %d \n", trace);

   //Norm of a Matrix
   norm = norm_matrix(A, m, n);     
   printf("\nNORM is %f \n", norm);
   
   return 0;
}

//User-defined functions
void trace_matrix(int A[MAX][MAX], int n)
{
   for(i=0; i < n; i++)    
      trace += A[i][i]; 
}

float norm_matrix(int A[MAX][MAX], int m, int n)
{
   for (i = 0; i < m; ++i) 
      for (j = 0; j < n; ++j)
         sum += pow(A[i][j],2);
      
   norm = sqrt(sum);
   
   return norm;
}

*/



/* Part : B10
To find the trace (if matrix is square) and norm of a given matrix. Print both the
input & output matrices with suitable headings.       */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 5
int main()
{  
   int A[MAX][MAX], i, j, m, n, trace = 0, sum = 0;
   float norm=0;

   system("clear");
   rep:
   printf("\nEnter the Size/Order/Dim. of the Matrix-A: ");
   scanf("%d %d",&m, &n);
   
   if(m!=n)
   {
      printf("\nOrder of the Matrix-A must be Sqr. Matrix i.e. M = N...");
      goto rep;
   }
   
   printf("\nInput %d elements into MATRIX-A: ", (m*n) );
   for(i=0; i < m; i++)    
      for(j=0; j < n; j++)
         scanf("%d",&A[i][j]); 
         
   printf("\nElements of MATRIX-A:\n");
   for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
         printf("%d   ",A[i][j]); 
         printf("\n");
   }   
   
   //trace_matrix(A, n); 
   for(i=0; i < n; i++)    
      trace += A[i][i]; 
   printf("\nTrace is %d \n", trace);

  // norm = norm_matrix(A, m, n);  
  for (i = 0; i < m; ++i) 
  {
      for (j = 0; j < n; ++j)
         sum += pow(A[i][j],2);
  }    
  norm = sqrt(sum);   
  printf("\nNORM is %f \n", norm);
   
   return 0;
}


