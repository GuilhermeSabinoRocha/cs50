#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover card.raw\n");
        return 1;
    }

     // remember filenames
    char *infile = argv[1];

    // open input file
    FILE *file = fopen(infile, "r");
    if (file == NULL)
    {

        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    unsigned char buffer[512];

    int keeptrack = 0;

    char filename[50];

    sprintf(filename, "%03i.jpg", keeptrack);

    FILE *img = fopen(filename, "a");

    fread(&buffer, sizeof(char), 512, file); // reading bytes from card for the first time

            while (fread(&buffer, 512, 1, file))

            {

            if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
            {
                if (keeptrack == 0)

                {
                    fwrite(&buffer,sizeof(char), 512, img);
                    fseek(file,512,SEEK_CUR);
                    fread(&buffer, sizeof(char), 512, file);
                    keeptrack++;
                }

                else
                {
                    fclose(img);
                    sprintf(filename, "%03i.jpg", keeptrack);
                    img = fopen(filename, "a");
                    fwrite(&buffer,sizeof(char), 512, img);
                    keeptrack++;
                    fseek(file,512,SEEK_CUR);
                    fread(&buffer, sizeof(char), 512, file);
                }

            }
            else
            {
                if (keeptrack == 0)

                {
                    fseek(file,512,SEEK_CUR);
                    fread(&buffer, sizeof(char), 512, file);
                }

                else
                {
                    fwrite(&buffer,sizeof(char), 512, img);
                    fseek(file,512,SEEK_CUR);
                    fread(&buffer, sizeof(char), 512, file);
                }
            }
            }

    // close files
    fclose(file);
    fclose(img);

    // success
    return 0;

}