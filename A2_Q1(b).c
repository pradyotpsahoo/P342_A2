/*
#The average distance between two points on a 6 by 6 
two-dimensional grid (no diagonal connections)
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int dist=0;
	int count=0;
   	int i,j,px,py;
	for(px=0;px<6;px++)
	{
		for(py=0;py<6;py++)
		{
			for(i=0;i<6;i++)
			{
				for(j=0;j<6;j++)
				{
				dist=dist+abs(i-px)+abs(j-py);
				count++	;
				}	
			}	
		}
	}   
    
	printf("\nThe total sum of the distances between two points in (6x6)grid is  : %d ",dist);
    printf("\nThe total number of distances in (6x6)grid is :  %d\n",count);
    printf("\nThe average distances between two points in (6x6)grid is :  %f\n",(float)dist/(float)count);    
	
    return 0;
}
