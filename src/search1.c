#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[3] = {"Ali", "Ayse", "Mehmet"};

    string target = get_string("Name: ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], target) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
}
