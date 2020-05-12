#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./cesar20 key\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)

            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./cesar20 key\n");
                return 1;
            }
            else
            {
            }

    }

    string plaintext = get_string("Plaintext: ");
    printf("ciphertext: ");

    int key = atoi(argv[1]);

    for (int i = 0, n = strlen(plaintext); i < n; i++)

        if (isupper(plaintext[i]))

        {
            printf("%c", (plaintext[i] - 'A' + key) % 26 + 'A');

        }

        else if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'a' + key) % 26 + 'a');
        }

        else
        {
            printf("%c", plaintext[i]);
        }

    printf("\n");
}
