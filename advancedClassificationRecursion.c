#include "NumClass.h"

int isPalindrome(int num)
{
    int reversed = 0;
    int sum = 0;
    if (num != 0)
    {
        reversed = num % 10;
        sum = sum * 10 + reversed;
        isPalindrome(num / 10);
    }
    if (sum == num)
        return 1;
    return 0;
}

int sigma(int smallerNum, int counter, int sum)
{
    int sum1 = sum;
    int num1 = smallerNum / 10;
    int num2 = smallerNum % 10;

    if (smallerNum != 0)
        sum1 += (int)(pow((double) num2, (double)counter)) + sigma(num1, counter, sum1);
    return sum1;
}

int isArmstrong(int num)
{
    if (num == 0)
        return 1;
    int counter = 0;
    int tempnum = num;
    while (tempnum > 0)
    {
        counter++;
        tempnum = tempnum / 10;
    }
    if (num == sigma(num, counter, 0))
        return 1;
    return 0;
}

