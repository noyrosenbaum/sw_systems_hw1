#include "NumClass.h"

int isPrime(int num)
{
    if (num == 1)
    {
        return 1;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int factorial(int digit)
{
    if (digit == 0 || digit == 1)
    {
        return 1;
    }
    return (digit * factorial(digit - 1));
}
int isStrong(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int digit = factorial(num % 10);
        sum += digit;
        num /= 10;
    }
    if (sum == num)
    {
        return 1;
    }
    return 0;
}
