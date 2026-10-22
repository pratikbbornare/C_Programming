
////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description  : Prints the specified number of asterisks.
// Input        : One integer, iNo.
// Output       : Asterisks equal to the given number.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while (iCnt < iNo)
    {
        printf("* ");
        iCnt++;
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
