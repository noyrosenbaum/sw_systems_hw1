#include "NumClass.h"

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int i = a;

    while (i <= b)
    {
        if (isPrime(i) == 1)
        {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    i = 0;

    while (i <= b)
    {
        if (isArmstrong(i) == 1)
        {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    i = 0;

    while (i <= b)
    {
        if (isStrong(i) == 1)
        {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    i = 0;

    while (i <= b)
    {
        if (isPalindrome(i) == 1)
        {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}