// Prints an integer via its address

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", &n);
    printf("%p\n", p);

    if (&p == &n)
    {
       printf("ok\n");
    }
}