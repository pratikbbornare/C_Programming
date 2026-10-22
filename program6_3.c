
////////////////////////////////////////////////////////////
//
// Function Name: CalculateDiscount
// Description  : Calculates the final amount after discount.
// Input        : Total purchase amount.
// Output       : Payable amount or invalid-input message.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0.0f)
    {
        printf("Invalid purchase amount\n");
        return;
    }

    if (fAmount < 1000.0f)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount < 5000.0f)
    {
        fDiscount = fAmount * 0.10f;
    }
    else
    {
        fDiscount = fAmount * 0.20f;
    }

    fFinalAmount = fAmount - fDiscount;

    printf("Payable Amount = %.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
