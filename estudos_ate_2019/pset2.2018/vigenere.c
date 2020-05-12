#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    if (argc ==2)

            for (int i = 0; i < argc; i++)

            {
                for (int j = 0, n = strlen(argv[i]); j < n; j++)


                    if (argv[i][j] >= 'a' && argv[i][j] <= 'Z')
                    {
                        printf ("Sucess\n");
                        return 0;
                    }

                    else
                    {
                        printf ("./vigenere keyword\n");
                        return 1;
                    }
            }

    else
    {
        printf ("./vigenere keyword\n");
    }

}