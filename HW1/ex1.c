#include <stdio.h>

//Excercise one for Computer Architecture
//Written by Pedro Padron CWW811
/*The goal of this program is to take an integer as an input and convert it to 16-bit binary. The number inputs may be positive or negative*/

int main()
{
    //Final array with the zeros inserted
    int retArr[16] = {000000000000};

    //Array that holds conversion
    int convArr[16];

    //Number being converted
    int input; 

    //Iterator
    int i;

    printf("Enter number to convert: \n");
    scanf("%d", &input);

    for(i=0;input>0;i++)
    {
        retArr[i]=input%2;
        input=input/2;
    }

    /*for(i=0; convArr[i] == 16; i++)
    {
        convArr[i] = retArr[i];
        printf("%d", retArr);
    }
    */

    printf("Converted integer to binary is: ");

    for(i=i-1;i>=0;i--)
    {
        printf("%d", retArr[i]);
    }

    return 0;
}