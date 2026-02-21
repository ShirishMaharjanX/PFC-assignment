/*
 * CelsiusToFahrenheit.c
 * Exercise 2: Convert Celsius to Fahrenheit
 *
 * Reads a temperature in Celsius from the user and converts it
 * to Fahrenheit using the formula: fahrenheit = (9.0 / 5) * celsius + 32
 *
 * Note: 9 / 5 uses integer division and evaluates to 1 (incorrect).
 *       9.0 / 5 uses floating-point division and evaluates to 1.8 (correct).
 */

#include <stdio.h>

int main(void)
{
    double celsius    = 0.0;
    double fahrenheit = 0.0;

    printf("Enter a temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1)
    {
        fprintf(stderr, "Error: Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    fahrenheit = (9.0 / 5) * celsius + 32.0;

    printf("%.1f degrees Celsius is %.1f degrees Fahrenheit.\n",
           celsius, fahrenheit);

    return 0;
}