/*
 * Population.c
 * Exercise 1: Population Projection
 *
 * Displays the projected U.S. population for each of the next five years
 * based on birth, death, and immigration rates from the U.S. Census Bureau.
 *
 * Assumptions:
 *   - One birth every 7 seconds
 *   - One death every 13 seconds
 *   - One new immigrant every 45 seconds
 *   - Current population: 312,032,486 
 *   - One year = 365 days
 */

#include <stdio.h>

int main(void)
{
    const long INITIAL_POPULATION = 312032486L;
    const int  SECONDS_PER_MINUTE = 60;
    const int  MINUTES_PER_HOUR   = 60;
    const int  HOURS_PER_DAY      = 24;
    const int  DAYS_PER_YEAR      = 365;

    const int  BIRTH_INTERVAL_SEC     = 7;   
    const int  DEATH_INTERVAL_SEC     = 13;
    const int  IMMIGRANT_INTERVAL_SEC = 45; 
    const int  YEARS_TO_PROJECT = 5;

    const long SECONDS_PER_YEAR = (long)SECONDS_PER_MINUTE
                                * MINUTES_PER_HOUR
                                * HOURS_PER_DAY
                                * DAYS_PER_YEAR;

    long births_per_year     = (long)(1.0 * SECONDS_PER_YEAR / BIRTH_INTERVAL_SEC);
    long deaths_per_year     = (long)(1.0 * SECONDS_PER_YEAR / DEATH_INTERVAL_SEC);
    long immigrants_per_year = (long)(1.0 * SECONDS_PER_YEAR / IMMIGRANT_INTERVAL_SEC);
    long net_change_per_year = births_per_year - deaths_per_year + immigrants_per_year;

    long population = INITIAL_POPULATION;

    printf("=== U.S. Population Projection ===\n");
    printf("Initial population : %ld\n", INITIAL_POPULATION);
    printf("Births  per year   : %ld\n", births_per_year);
    printf("Deaths  per year   : %ld\n", deaths_per_year);
    printf("Immigrants per year: %ld\n", immigrants_per_year);
    printf("Net change per year: %ld\n\n", net_change_per_year);
    printf("%-6s  %-15s\n", "Year", "Population");
    printf("------  ---------------\n");

    int year;
    for (year = 1; year <= YEARS_TO_PROJECT; year++)
    {
        population += net_change_per_year;
        printf("%-6d  %-15ld\n", year, population);
    }

    return 0;
}