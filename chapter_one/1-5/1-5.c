#include <stdio.h>

#define UPPER 0
#define LOWER 300
#define STEP 10

int main()
{
    int fahrenheit;

    for (fahrenheit = LOWER; fahrenheit >= UPPER; fahrenheit = fahrenheit - STEP) {
        float celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

        printf("%d\t%13.1f\n", fahrenheit, celsius);
    }

    return 0; 
}
