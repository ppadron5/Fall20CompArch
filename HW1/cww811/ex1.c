#include <stdio.h>
#include <math.h>
//Excercise one for Computer Architecture
//Written by Pedro Padron CWW811
/*The goal of this program is to take an integer as an input and convert it to 16-bit binary. The number inputs may be positive or negative*/

//Function prototypes for the conversion functions for decimal to binary as well as printing the binary
void decToBin(int num1, int binNum1[]);
void printBin(int arr[], int n);

int main()
{
    //Number entered to be converted
    int num1;

    //Binary converted number
    int  binNum1[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 
    //Prompt to enter number for conversion
    printf("Enter number to be converted \n");
    scanf("%d", &num1);
    
    //Call to the conversion function
    decToBin(num1, binNum1);
 
    //Call to printing and formatting function
    printBin(binNum1, 16);

    return 0;
}

//Function that performs decimal to binary conversion
void decToBin(int num1, int binNum1[]){
    int result;
    int i = 0;

    do{
        result = num1 % 2;
        num1 /= 2;
        binNum1[i] = result;
        i++;
    }while(num1 > 0);
 }
 
//Function that prints and formats the binary number 
void printBin(int arr[], int n){
    int i;

    for(i = n -1; i >=0; i--){
        printf("%d ", arr[i]);
    }

    printf("\n");
 }