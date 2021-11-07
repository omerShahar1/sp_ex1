#include <stdio.h>
#include "NumClass.h"

int isPrime(int num) //return 1 if number is prime. else return 0
{
    int i;
    for(i=2; i<num/2; i++)
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
    int sum=0, digit, value=num, i, factorial;
    while(value != 0)
    {
        digit = value % 10; //represent specific digit of the number
        factorial = 1;
        for(i=digit; i>0; i--)
        {
            factorial = factorial * i; 
        }
        sum = sum + factorial;
        value = value/10;
    }
    if(sum == num)
    {
        return 1;
    }
    return 0; 
}