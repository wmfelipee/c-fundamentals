#include <stdio.h>
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main(void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;    /* lower limit of temperature scale */
    upper = 300;  /* upper limit */
    step = 20;    /* step size  */

    fahr = lower;
    float celsius;
    while (fahr  <= upper) {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%d\t%.1f\n", fahr, celsius);
        fahr = fahr + step;;

    }
    return 0;
}
    
