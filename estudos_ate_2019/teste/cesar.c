#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[], string a[])
{

    int K = 0;
    int L = 0;

    if (argc ==2)

    {

            for (int i = 1; i < argc; i++)

            {

                for (int j = 0, n = strlen(argv[i]); j < n; j++)

                        if (isdigit(argv[i][j]))
                        {
                            K++;
                        }

                        else
                        {
                            L--;
                        }

            }

        if (L == 0)
        {

            int y = 1;

            a[y] = get_string ("plaintext: ");
            printf ("ciphertext: ");

                for (y = 1; y < argc; y++)

                    {

                        for (int j = 0; j < strlen(a[y]); j++)

                        {

                            int m = atoi(argv[1]);

                                if (isalpha(a[y][j]) != 0)

                                {
                                    int g = (int) a[y][j];
                                    int n = g + m;
                                    char o = (char) n;
                                    printf ("%c", n);

                                }

                                else

                                {
                                    printf ("%c", a[1][j]);
                                }

                        }

                    printf("\n");

                    }

        }

        else

        {
            printf ("Usage: ./caesar key\n");
            return 1;
        }

    }

    else
    {
        printf ("Usage: ./caesar key\n");
        return 1;
    }

}
