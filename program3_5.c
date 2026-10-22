
////////////////////////////////////////////////////////////
//
// Function Name: ChkVowel
// Description  : Checks whether a character is an English vowel.
// Input        : One character.
// Output       : TRUE if it is a vowel; otherwise FALSE.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if (cValue == 'a' || cValue == 'e' ||
        cValue == 'i' || cValue == 'o' ||
        cValue == 'u' || cValue == 'A' ||
        cValue == 'E' || cValue == 'I' ||
        cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: ");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}
