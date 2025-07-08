#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 10

int main()
{
    float fahrenheit, celsius;

    printf("CELSIUS\t\tFAHRENHEIT\n");
    celsius = LOWER;
    while (celsius <= UPPER) {
        fahrenheit = (celsius * (9.0 / 5.0)) + 32;
        printf("%2.1f\t%13.1f\n", celsius, fahrenheit);
        celsius = celsius + STEP;
    }

    return 0;
}
