#include "NumClass.h"

int isArmstrong(int num)
{
    int temp, temp2 = num;
    int counter, sum = 0;
    if (num < 0)
    {
        return 0;
    }
    if (num == 0)
    {
        return 1;
    }
    while (temp > 0)
    {
        counter++;
        temp = temp / 10;
    }
    int tempcounter;
    tempcounter = counter - 1;
    for (; tempcounter > 0; tempcounter--)
    {
        int temp1 = 0;
        temp1 = temp2 % 10;
        sum = sum + pow(temp1, counter);
        temp2 = temp2 / 10;
    }
    sum = sum + pow(temp2, counter);
    if (sum == num)
    {
        return 1;
    }
    return 0;
}

int isPalindrome(int num)
{
    int temp1 = num;
    int reversednum = 0;

    while (temp1 != 0)
    {
        int temp2 = temp1 % 10;
        reversednum = reversednum * 10 + temp2;
        temp1 = temp1 / 10;
    }

    if (num == reversednum)
        return 1;

    return 0;
}
