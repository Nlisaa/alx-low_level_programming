#include "main.h"

int _atoi(char *s)
{
    int result = 0;
    int sign = 1; // Default to positive

    while (*s)
    {
        if (*s == '-')
        {
            sign *= -1; // Handle negative sign
        }
        else if (*s == '+')
        {
            // Handle positive sign (optional)
        }
        else if (*s >= '0' && *s <= '9')
        {
            // Convert character to integer
            int digit = *s - '0';
            // Check for integer overflow
            if (result > (INT_MAX - digit) / 10)
            {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            result = (result * 10) + digit;
        }
        else if (result != 0)
        {
            break; // Stop if non-digit characters follow the number
        }
        s++;
    }

    return result * sign;
}
