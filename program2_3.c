
////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description  : Prints Hello or Demo based on the number.
// Input        : One integer, iNo.
// Output       : Hello if less than 10; otherwise Demo.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
