
////////////////////////////////////////////////////////////
//
// Function Name: FindGreater
// Description  : Finds the greater of two integers.
// Input        : Two integers (iFirst and iSecond).
// Output       : Displays the greater number or an equality message.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if (iSecond > iFirst)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
