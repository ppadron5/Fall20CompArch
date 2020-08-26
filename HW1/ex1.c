#include <stdio.h>

//Excercise one for Computer Architecture
//Written by Pedro Padron CWW811
/*The goal of this program is to take an integer as an input and convert it to 16-bit binary. The number inputs may be positive or negative*/

int main()
{
    int a[10];
    int n; 
    int i;

    printf("Enter number to convert: \n");
    scanf("%d", &n);

    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    printf("Converted integer to binary is: ");

    for(i=i-1;i>=0;i--)
    {
        printf("%d", a[i]);
    }

    return 0;
}