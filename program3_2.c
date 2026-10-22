
////////////////////////////////////////////////////////////
//
// Function Name: DisplayFactor
// Description  : Displays all even factors of a number.
// Input        : One integer.
// Output       : All positive even factors of the number.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        printf("Factors of zero are not listed here.\n");
        return;
    }

    for (i = 1; i <= iNo; i++)
    {
        if ((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
