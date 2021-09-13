#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float a;
    do
    {
        a = get_float("what is a balance: ");
    }while (a <= 0);
    int cents = round (a * 100);
    int count = 0;
    if (cents >= 25)
    {
        count++;
        cents -= 25;
    }
    while (cents >= 10)
    {
        count++;
        cents -= 10;
    }
    while (cents >= 5)
    {
        count++;
        cents -= 5;
    }
    while (cents >= 1)
    {
        count++;
        cents -= 1;
    }
    printf("%i\n", count);
}