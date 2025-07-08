#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 10

int main()
{
    float fahrenheit, celsius;
    
    printf("FAHRENHEIT\tCELESIUS\n");
    fahrenheit = LOWER;
    while (fahrenheit <= UPPER) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%2.1f\t%13.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + STEP;
    }

    return 0;
}
