
////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description  : Prints asterisks by decrementing the number.
// Input        : One integer, iNo.
// Output       : Asterisks equal to the positive input number.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    while (iNo > 0)
    {
        printf("* ");
        iNo--;
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
