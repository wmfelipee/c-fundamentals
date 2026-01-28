#include <stdio.h>

int main(void)
{
    int kelvin, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 1000;
    step = 100;

    kelvin = lower;
    while (kelvin <= upper) {
        celsius = kelvin - 273;
        printf("%d\t%d\n", kelvin, celsius);
        kelvin = kelvin + step;
    }
    return 0;
}   