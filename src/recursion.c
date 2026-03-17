#include <cs50.h>
#include <stdio.h>

void print_rows(int n);

int main(void)
{
  int n;

do
{
     n = get_int("Height: ");
}
while (n < 1);

print_rows(n);
}

void print_rows(int n)
{
    if (n == 0)
    {
        return;
    }

    print_rows(n - 1);

    for (int i = 0; i < n; i++)
    { 
