#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 	double radius;
 	printf("Enter radius:");
 	scanf("%lf", &radius);
	printf("volume is : %lf \n\n", (4.00/3)*PI*(radius*radius*radius) );
	return 0;
}