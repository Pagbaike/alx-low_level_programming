nclude <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, m;

    for (n = 48; n <= 56; n++)
    {
        for (m = 49; m <= 57; m++)
        {
            if (m > n)
            {
                printf("%c%c", n, m);
                if (n != 56 || m != 57)
                {
                    printf(", ");
                }
            }
        }
    }
    printf("\n");
    return (0);
}
