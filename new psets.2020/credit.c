#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    //imput do usuario
    long cardnumber = get_long("Number: ");

    //calcula se é número válido de cartão, separando os dígitos usando as variáveis n16th,
    // n15th, etc até o primeiro da direita, o n1st,
    // e usando módulo (n16rem, n15 rem, etc) para acessar o próximo dígito
    long n16th = cardnumber /  1000000000000000;
    long n16rem = cardnumber %  1000000000000000;

    long n15th = n16rem /       100000000000000;
    long n15rem = n16rem %       100000000000000;

    long n14th = n15rem /       10000000000000;
    long n14rem = n15rem %       10000000000000;

    long n13th = n14rem /       1000000000000;
    long n13rem = n14rem %       1000000000000;

    long n12th = n13rem /       100000000000;
    long n12rem = n13rem %       100000000000;

    long n11th = n12rem /       10000000000;
    long n11rem = n12rem %       10000000000;

    long n10th = n11rem /       1000000000;
    long n10rem = n11rem %       1000000000;

    long n9th = n10rem /        100000000;
    long n9rem = n10rem %       100000000;

    long n8th = n9rem /         10000000;
    long n8rem = n9rem %        10000000;

    long n7th = n8rem /         1000000;
    long n7rem = n8rem %         1000000;

    long n6th = n7rem /         100000;
    long n6rem = n7rem %         100000;

    long n5th = n6rem /         10000;
    long n5rem = n6rem %         10000;

    long n4th = n5rem /         1000;
    long n4rem = n5rem %         1000;

    long n3rd = n4rem /         100;
    long n3rem = n4rem %         100;

    long n2nd = n3rem /         10;
    long n2rem = n3rem %         10;

    long n1st = n2rem;

    //checksum

    long sum2 = n2nd*2;
    long sum4 = n4th*2;
    long sum6 = n6th*2;
    long sum8 = n8th*2;
    long sum10 = n10th*2;
    long sum12 = n12th*2;
    long sum14 = n14th*2;
    long sum16 = n16th*2;

    if (sum2 >= 10)
    {

    }
    else
printf("%li\n",n2nd);
printf("%li\n",n1st);




}