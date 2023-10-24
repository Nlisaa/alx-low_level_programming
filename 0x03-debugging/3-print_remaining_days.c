#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if (month > 2)  // After February
        {
            day++;  // Include the leap day
        }

        int days_in_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int day_of_year = 0;
        for (int i = 1; i < month; i++)
        {
            day_of_year += days_in_month[i];
        }
        day_of_year += day;

        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", 366 - day_of_year);
    }
    else
    {
        int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int day_of_year = 0;
        for (int i = 1; i < month; i++)
        {
            day_of_year += days_in_month[i];
        }
        day_of_year += day;

        if (month == 2 && day > 28)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day_of_year);
            printf("Remaining days: %d\n", 365 - day_of_year);
        }
    }
}
