#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[], string a[])
{
    
// K and L check if argv is a number
    int K = 0;
    int L = 0;

// checking if there is only one argument
    if (argc ==2)

    {

            for (int i = 1; i < argc; i++)

            {
// looping through each char of argv
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
// L = zero means command line argument is a positive number
        if (L == 0)
        {

            int y = 1;
// getting text to be encrypted
            a[y] = get_string ("plaintext: ");
            printf ("ciphertext: ");

                for (y = 1; y < argc; y++)

                    {
// encrypting each character of the plaintext to be returned as cyphertext
                        for (int j = 0; j < strlen(a[y]); j++)

                        {

                            int m = atoi(argv[1]);

                                if (isalpha(a[y][j]) != 0[])

                                {

                                    if (isupper(a[y][j]) != 0)

                                    {
                                        int g = (int) a[y][j];
                                        int constant1 = 65;
                                        int n = g + m - constant1;
                                        int p = (n % 26) + constant1;
                                        char o = (char) p;
                                        printf ("%c", p);
                                    }

                                     else

                                     {
                                        int g = (int) a[y][j];
                                        int constant2 = 97;
                                        int d = g + m - constant2;
                                        int e = (d % 26) + constant2;
                                        char q = (char) e;
                                        printf ("%c", e);
                                     }


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
