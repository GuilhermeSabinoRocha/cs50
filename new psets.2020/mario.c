#include <cs50.h>
#include <stdio.h>

int main(void)
{
// pede ao usuario um numero de 1 a 8, insistindo se diferente disso
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

// loops de construçao da piramide, usando a variavel h1,
// para a contagem dos espaços, e a h2, para a contagem
// dos #

    int h1 = height - 1;
    int h2 = height - h1;

    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < h1; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < h2; k++)
        {
            printf("#");
        }

        printf("  ");

        for (int l = 0; l < h2; l++)
        {
            printf("#");
        }

        for (int m = 0; m< h1; m++)
        {
            printf (" ");
        }

        printf("\n");

        h1--;
        h2++;

    }

}
