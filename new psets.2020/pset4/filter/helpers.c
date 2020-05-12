#include "helpers.h"
#include "math.h"
#include "stdlib.h"


// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    //iterate over  rows
    for (int i = 0; i < height; i++)
    {
        //iterate over individual pixels within each row
        for (int j = 0; j < width; j++)
        {
            //manipulates the values of each image.properties and redefines the properties,
            // to apply a grayscale filter
            int m = (image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3;
            int avg = round (m);
            image[i][j].rgbtBlue = avg;
            image[i][j].rgbtRed = avg;
            image[i][j].rgbtGreen = avg;

        }

    }

    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
     //iterate over  rows
    for (int i = 0; i < height; i++)
    {
        //iterate over individual pixels within each row
        for (int j = 0; j < width; j++)
        {
            //manipulates the values of each image.properties and redefines the properties,
            // to apply a sepia filter
            int red2 = image[i][j].rgbtRed;
            int green2 = image[i][j].rgbtGreen;
            int blue2 = image[i][j].rgbtBlue;

            int calcblue = (0.272 * red2) + (0.534 * green2) + (0.131 * blue2);
            image[i][j].rgbtBlue = calcblue;

            int calcgreen = (0.349 * red2) + (0.686 * green2) + (0.168 * blue2);
            image[i][j].rgbtGreen = calcgreen;

            int calcred = (0.393 * red2) + (0.769 * green2) + (0.131 * blue2);
            image[i][j].rgbtRed = calcred;

        }

    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{

    int *tmp = malloc(3* sizeof(int));

        //iterate over  rows
    for (int i = 0; i < height; i++)
    {


        //iterate over individual pixels within each row
        for (int j = 0; j < (width / 2); j++)
        {

            tmp[0] = image[j][i].rgbtBlue;
            tmp[1] = image[j][i].rgbtGreen;
            tmp[2] = image[j][i].rgbtRed;

            image[j][i].rgbtBlue = image[j][width - i - 1].rgbtBlue;
            image[j][i].rgbtGreen = image[j][width - i - 1].rgbtGreen;
            image[j][i].rgbtRed = image[j][width - i - 1].rgbtRed;

            image[j][width - i - 1].rgbtBlue = tmp[0];
            image[j][width - i - 1].rgbtGreen = tmp[1];
            image[j][width - i - 1].rgbtRed = tmp[2];
        }
    }
    free(tmp);
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

    return;
}
