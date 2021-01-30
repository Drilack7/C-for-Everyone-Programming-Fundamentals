#include <stdio.h>
int main()
{

    FILE *myFile;
    myFile = fopen("elephant_seal_data.txt", "r");

    //read file into array
    int numberArray[1000];
    int i;

    for (i = 0; i < 1000; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }

    for (i = 0; i < 1000; i++)
    {
        printf("Number is: %d\t", numberArray[i]);
    }

return 0;

}
