#include <stdio.h>
#include <math.h>

//Function prototypes
void decToBin(int num1, int binNum1[]);
void printBin(int arr[], int n);
int add(int num1[], int num2[], int res[]);

int main()
{
    //Number entered to be converted
    int num1;
    int num2;
    int i;

    //Binary converted number
    int  binNum1[4] = {0,0,0,0};
    int  binNum2[4] = {0,0,0,0};

    int  binRes[4] = {0,0,0,0};
 
    //Prompt to enter number for conversion
    printf("Enter number1 to be added \n");
    scanf("%d", &num1);

    printf("Enter number2 to be added \n");
    scanf("%d", &num2);
    
    //Call to the conversion function
    decToBin(num1, binNum1);
    decToBin(num1, binNum2);
 
    //Call to printing and formatting function
    //printBin(binNum1, 16);
    //printBin(binNum2, 16);

    //Call to the adding function
    add(binNum1, binNum2, binRes);

    //Printing the result
    printf("res= ");
    for(i = 0; i<4;i++)
    {
    printf("%d", binRes[i]);
    }

    //Checking for overflow
    if(binNum1[0] == binNum2[0])
    {    
        if(binRes[0] != binNum1[0])
        {
            return 1;
        }
    }
    
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

//Adding function that adds the two user input binar numbers
 int add(int num1[], int num2[], int res[]){
    int i;
    int c = 0;

    for(i = 0; i < 8 ; i++){
        res[i] = ((num1[i] ^ num2[i]) ^ c); //a xor b xor c
        c = ((num1[i] & num2[i]) | (num1[i] &c)) | (num2[i] & c); //ab+bc+ca
    }
    //res[i] = c;
    return res[i];
 }