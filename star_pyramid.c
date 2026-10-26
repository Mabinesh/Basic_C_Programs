#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter number of rows: ");
    if (scanf("%d", &n) != 1 || n < 1)
    {
        printf("Please enter a positive number of rows.\\n");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars: 2 * i - 1
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\\n");
    }

    return 0;
}
