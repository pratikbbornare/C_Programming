
////////////////////////////////////////////////////////////
//
// Function Name: Accept
// Description  : Prints asterisks according to the given number.
// Input        : One integer, iNo.
// Output       : The specified number of asterisks.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    if (iValue < 0)
    {
        printf("Please enter a non-negative number\n");
    }
    else
    {
        Accept(iValue);
    }

    return 0;
}
