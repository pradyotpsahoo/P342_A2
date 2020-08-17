/*
Create two vectors of type A=(a1,a2,a3) and B=(b1,b2,b3) with numbers of
your choice (butnot random numbers) in the code itself. Find A+B and A.B 
(dot product).
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float A[]={4,-3.5,5};
	float B[]={2.5,6,0};
	float sum[]={0,0,0};
	float dot_pdt=0;
	int i,j;
	
	for(i=0;i<=2;i++)
	{
		sum[i]=A[i]+B[i];
	}
	for(j=0;j<=2;j++)
	{
		dot_pdt=dot_pdt+A[j]*B[j];
	}
	printf("\nThe addition A+B vecter is : ");
	for(i=0;i<=2;i++)
	{
		printf("%f  ",sum[i]);
	}

	printf("\n\nThe dot product A.B is :  %f\n",(float)dot_pdt);
	
	return 0;
}
