#include <stdio.h>
#include "NumClass.h"

int isPrime(int num) //return 1 if number is prime. else return 0
{
    int i;
    for(i=2; i<num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int isStrong(int num)// return 1 if the number is strong. else return 0
{
    int sum = 0;
    int value = num;
    while(value !=  0)
    {
        int digit = value%10;
        int digitValue = digit;
        for(int i = 1; i < digitValue; i++)
        {
            digit = digit * i;
        }
        sum = sum + digit;
        value = value/10;
    }
    if(sum == num)
    {
        return 1;
    }
    return 0;
}
