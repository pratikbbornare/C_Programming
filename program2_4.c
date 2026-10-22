
////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description  : Prints a number according to its frequency.
// Input        : iNo is the number; iFrequency is the count.
// Output       : The number printed the specified count of times.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    while (iFrequency != 0)
    {
        printf("%d ", iNo);

        if (iFrequency > 0)
        {
            iFrequency--;
        }
        else
        {
            iFrequency++;
        }
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
