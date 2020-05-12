#include <stdio.h>
#include <cs50.h>

bool valid_triangle (float a, float b, float c);

int main(void)
{

    do

    float a = get_float ("Type in the first side length of the triangle: \n");

    while

    {
        float a <=0;

    }

    do

    float b = get_float ("Type in the second side length of the triangle: \n");

    while

    {
        float b <=0;

    }

    do

    float c = get_float ("Type in the third side length of the triangle: \n");

    while

    {
        float c <=0;

    }


if





}

bool valid_triangle (float a, float b, float c)

{

    if ((a + b <= c) || (a + c <= b) || (c + b <= a);

    {
        return false;
    }

    return true




}











