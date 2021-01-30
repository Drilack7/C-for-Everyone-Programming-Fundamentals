/* C program that prints a table of 
values for sine and cosine between (0,1) */

#include <stdio.h>
#include <math.h>

int main()
{
	//declaration
	float interval,x,y;
	int i;
	
	//sine and cosine computation
	for(i=0; i<10; i++)
	{
		interval = i/10.0;
		x=sin(interval);
		y=cos(interval);
		printf("sine(%f)=%f\t cosine(%f)=%f\n",interval,x,interval,y);
	}
	
	return 0;
}
	

