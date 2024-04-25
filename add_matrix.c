/* Part : B9

To perform addition and subtraction of two matrices. Print both the input and
output matrices with suitable headings.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void read_matrix(int [MAX][MAX], int, int);
void print_matrix(int [MAX][MAX], int, int);
int A[MAX][MAX], B[MAX][MAX], S[MAX][MAX], D[MAX][MAX], i, j, m, n, p, q;

int main()
{
	 
   system("clear");
   printf("\nEnter the Size/Order/Dim. of the Matrix-A: ");
   scanf("%d %d", &m, &n); 

   printf("\nEnter the Size/Order/Dim. of the Matrix-B: ");
   scanf("%d %d", &p, &q); 

   if( !(m==p && n==q) )   //if(m!=p || n!=q)
   {
       printf("\nSize/Order/Dim. of the Input Matrices NOT Compatibility/Matching...\n");
       exit(0);
   } 
   
   printf("\nEnter %d elements into MATRIX-A: ", (m*n) );
   read_matrix(A, m, n);

   printf("\nEnter %d elements into MATRIX-B: ", (p*q) );
   read_matrix(B, p, q);

   //Addition and Subtraction of two matrices together

   for(i=0; i < p; i++)    
      for(j=0; j < q; j++)
      {
          S[i][j] = A[i][j] + B[i][j]; 
          D[i][j] = A[i][j] - B[i][j]; 
      }
      
   printf("\nElements of MATRIX-A:\n");
   print_matrix(A, m, n);

   printf("\nElements of MATRIX-B:\n");
   print_matrix(B, p, q);
   
   printf("\nAddition of Two MTRICES i.e. S(MxN):\n");
   print_matrix(S, m, n);

   printf("\nSubtraction/Diff. between Two MATRICES i.e. D(MxN):\n");
   print_matrix(D, m, n);

   return 0;
}

// User-Defined Functions Section

void read_matrix(int rm[MAX][MAX], int m, int n)
{
   for(i=0; i < m; i++)    
      for(j=0; j < n; j++)
         scanf("%d",&rm[i][j]); 
}

void print_matrix(int pm[MAX][MAX], int m, int n)
{
   for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
         printf("%d\t", pm[i][j]); 
         
      printf("\n");
   }
}*/

/* Part : B9

To perform addition and subtraction of two matrices. Print both the input and
output matrices with suitable headings. */

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main()
{
	
   int A[MAX][MAX], B[MAX][MAX], S[MAX][MAX], D[MAX][MAX], i, j, m, n, p, q; 
   system("clear");
   printf("\nEnter the Size/Order/Dim. of the Matrix-A: ");
   scanf("%d %d", &m, &n); 

   printf("\nEnter the Size/Order/Dim. of the Matrix-B: ");
   scanf("%d %d", &p, &q); 

   if( !(m==p && n==q) )   //if(m!=p || n!=q)
   {
       printf("\nSize/Order/Dim. of the Input Matrices NOT Compatibility/Matching...\n");
       exit(0);
   } 
   
   printf("\nEnter %d elements into MATRIX-A: ", (m*n) );
   //read_matrix(A, m, n);
  for(i=0; i < p; i++)    
      for(j=0; j < q; j++)
         scanf("%d",&A[i][j]); 

   printf("\nEnter %d elements into MATRIX-B: ", (p*q) );
  // read_matrix(B, p, q);
     for(i=0; i < p; i++)    
      for(j=0; j < q; j++)
         scanf("%d",&B[i][j]); 
   //Addition and Subtraction of two matrices together

   for(i=0; i < p; i++) 
   {   
      for(j=0; j < q; j++)
      {
          S[i][j] = A[i][j] + B[i][j]; 
          D[i][j] = A[i][j] - B[i][j]; 
      }
   }
      
   printf("\nElements of MATRIX-A:\n");
   //print_matrix(A, m, n);
   for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
      {
         printf("%d\t",A[i][j]); 
      }
      printf("\n");
   } 
   
   printf("\nElements of MATRIX-B:\n");
   //print_matrix(B, p, q);
   for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
      {
         printf("%d\t",B[i][j]); 
      }
      printf("\n");
   } 
   
   printf("\nAddition of Two MTRICES i.e. S(MxN):\n");
   //print_matrix(S, m, n);
  for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
      {
         printf("%d\t",S[i][j]); 
      }
      printf("\n");
   } 
   
   printf("\nSubtraction/Diff. between Two MATRICES i.e. D(MxN):\n");
   //print_matrix(D, m, n);
   for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
      {
         printf("%d\t",D[i][j]); 
      }
      printf("\n");
   } 
   
   return 0;
}


      
      
  
 



	

      
      
      
      
      
      
      
      
      
      
      
      

      
      
  
 



	

      
      
      
      
      
      
      
      
      
      
      
      

