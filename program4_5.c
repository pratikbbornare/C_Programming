
////////////////////////////////////////////////////////////
//
// Function Name: CheckDivisibility
// Description  : Checks whether an integer is divisible by 5.
// Input        : One integer (iValue).
// Output       : Displays the divisibility result.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if ((iValue % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
