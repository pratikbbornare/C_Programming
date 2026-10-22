
////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description  : Prints numbers from 5 to 1.
// Input        : None.
// Output       : Numbers in descending order from 5 to 1.
// Author       : Pratik Barsu Bornare
// Date         : 22/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int i = 0;

    i = 5;

    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}
