/*
Find the average distance between two points on a straight line 
made of discrete N (=6) points initialise the variable
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n=6 ,i,p;
	int dist=0;
	int count=0;
   	//loop iterate till the condition 
    for(p=1;p<=n;p++)
    	{
    		for(i=1;i<=n;i++)
    		{
    			dist=dist+abs(i-p);
    			count++;
			}
		}
	printf("\nThe total sum of the distances between two points : %d ",dist);
    printf("\nThe total number of distances is :  %d\n",count);
    printf("\nThe average distances between two points is :  %f\n",(float)dist/(float)count);    
	
    return 0;
}
