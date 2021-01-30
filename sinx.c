/* Program that prints the sine
function for an input x between (0, 1) */

//First include preprocessing files
#include <stdio.h>
#include <math.h>

int main()

{

//Declaration 
double sinValue, x;

//Input and address the x value
printf(" Please Enter the Value to calculate Sine : ");
scanf("%lf", &x);

//Compute and print the sin(x)
sinValue = sin(x);
printf("\n The Sine value of %lf = %f ", x, sinValue);

return 0;

}