
////////////////////////////////////////////////////////////
//
// Function Name: DisplayConvert
// Description  : Converts the case of an English alphabetic character.
// Input        : One character.
// Output       : Character converted to the opposite case.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n", cValue - 32);
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", cValue + 32);
    }
    else
    {
        printf("Not an alphabetic character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
