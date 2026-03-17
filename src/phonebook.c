#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string phone;
}
person;

int main(void)
{
    person people[3];

    people[0].name = "Ali";
    people[0].phone = "111";

    people[1].name = "Ayse";
    people[1].phone = "222";

    people[2].name = "Mehmet";
    people[2].phone = "333";

    string target = get_string("Name: ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, target) == 0)
        {
            printf("%s\n", people[i].phone);
            return 0;
        }
    }

    printf("Not found\n");
}
