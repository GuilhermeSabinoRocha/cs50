#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)

{
    int i = get_positive_int("Height: ");
     for (int x = 0; x < i; x++)
    {
              for (int y = x+1; y < i; y++)
              {printf(" ");
              }

                      for (int j = 0; j <= x; j++)
                      {
                      printf("#");
                      }

               printf("\n");



    }
}
// Prompt user for positive integer
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;



}