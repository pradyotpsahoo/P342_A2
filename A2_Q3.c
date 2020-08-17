/*
Create 3x3 matrices M=(a11,a12 … a33) and N=(b11,b12, …, b33) with numbers of your
choice (zeros, negatives and positives but not random numbers) in two separate files. 
Read the matrices from the files. Find M x A and M x N.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int i,j,k;
   double mul[3][3];
   double mul2[3];
   //declaring the size of m matrix
   double** M=malloc(3*sizeof(double*)); 
   for(i=0;i<3;++i){
	M[i]=malloc(3*sizeof(double));	
   }
   //declaring the size of n matrix 
   double** N=malloc(3*sizeof(double*)); 
   for(i=0;i<3;++i)
   {
	N[i]=malloc(3*sizeof(double));
   } 

   //extracing data of M from m.txt file 
   FILE *file;
   file=fopen("M.txt", "r");
   for(i = 0; i < 3; i++){
      for(j = 0; j < 3; j++) {
       if (!fscanf(file, "%lf", &M[i][j])) 
           break;
      }
   }
   fclose(file);
  
   //extracing data of M from m.txt file
   FILE *file2;
   file2=fopen("N.txt", "r");
   for(i = 0; i < 3; i++){
      for(j = 0; j < 3; j++) {
       if (!fscanf(file, "%lf", &N[i][j])) 
           break;
       }
   }
   fclose(file2);

   double A[3][1]={2,-3.5,4};
   //multiplication of M x N
   for(i=0;i<3;i++)
   {    
		for(j=0;j<3;j++)
		{    
			mul[i][j]=0;    
			for(k=0;k<3;k++)
			   {    
					mul[i][j]+=M[i][k]*N[k][j];    
			   }    
		}    
	} 
	printf("\n M x N : \n\n");
	//printing M x N matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%f ",mul[i][j]);
		}
		printf("\n");
	}
	
	//multiplication of M x A
	for(i=0;i<3;i++)
    {    
   		mul2[i]=0;  
		for(j=0;j<1;j++)
		{    
			  
			for(k=0;k<3;k++)
			   {    
					mul2[i]+=M[i][k]*A[k][j];    
			   }    
		}    
	} 
	//printing of M x A 
	printf("\n M x A : \n\n");
	for(i=0;i<3;i++)
	{
			printf("%f ",mul2[i]);	
	}
	printf("\n");
	
  return 0;
}
