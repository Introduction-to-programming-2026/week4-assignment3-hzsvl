#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[5] = {1, 2, 3, 4, 5};

    int target = get_int("Number: ");

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == target)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
}
