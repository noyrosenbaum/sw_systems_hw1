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

int isStrong(int num)
{
    const int factorial[] = {1,1,2,6,24,120,720,5040,40320,362880};
    int sum = 0;
    int temp = num;
    while (temp > 0)
    {
        int digit = factorial[temp % 10];
        sum += digit;
        temp /= 10;
    }
    if (sum == num)
    {
        return 1;
    }
    return 0;
}
