
////////////////////////////////////////////////////////////
//
// Function Name: DisplayEvenFactor
// Description  : Prints all positive even factors of a number.
// Input        : One integer.
// Output       : All positive even factors.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayEvenFactor(int iNo)
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

    DisplayEvenFactor(iValue);

    return 0;
}
