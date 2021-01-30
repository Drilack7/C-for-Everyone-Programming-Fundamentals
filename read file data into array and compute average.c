/* This program  reads the data from "elephant_seal_data.txt"
into an array and computes the average weight for the set
of the elephant seals.*/

//First include preprocessing files
#include <stdio.h>

int main()
{
    //Declarations
    FILE *myFile;
    int numberArray[1000];
    int i, j, sum=0;
    float avg=0.0;

    //Open and read the txt file
    myFile = fopen("elephant_seal_data.txt", "r");

    //Read file into array
    for (i = 0; i < 1000; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }

    //Compute the sum of all array values
    for (j = 0; j < 1000; j++)
    {
        sum = sum + numberArray[j];
    }

    //Compute and print the average of the array values
    avg = (float)sum / j;
    printf("Average of array values is %.3f", avg);

return 0;

}
