#include <stdio.h>
#include <time.h>

int main()
{
    int i, count;
    unsigned int mask;

    /* Set i to the hex value */
    i = 0x1b53;

    /* Mask starts at 0x8000 (1000 0000 0000 0000 in binary) to check the MSB first */
    mask = 0x8000;

    /* Get current time */
    time_t rawtime = time(NULL);

    /* Print header */
    printf("Hex value = %04X, Binary= ", i);

    /* Loop 16 times to check each bit */
    for (count = 1; count <= 16; count++)
    {
        if (i & mask)
            printf("1");
        else
            printf("0");

        /* Print space every 4 digits */
        if (count % 4 == 0)
        {
            printf(" ");
        }

        /* Shift mask right by 1 */
        mask >>= 1;
    }

    /* Print newline and date */
    printf("\nBinaryPrint %s\n", ctime(&rawtime));

    return 0;
}
