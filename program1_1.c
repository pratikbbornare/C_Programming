
////////////////////////////////////////////////////////////
//
// Function Name: Divide
// Description  : Divides two integers and returns the result.
// Input        : Two integers, iNo1 and iNo2.
// Output       : Quotient, or -1 if the divisor is zero.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if (iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    if (iRet == -1)
    {
        printf("Division by zero is not allowed\n");
    }
    else
    {
        printf("Division is %d\n", iRet);
    }

    return 0;
}
