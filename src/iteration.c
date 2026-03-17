#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    // get positive number
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    // print pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
