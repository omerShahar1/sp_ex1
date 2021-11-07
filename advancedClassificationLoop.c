#include <stdio.h>
#include "NumClass.h"

int reversedNum(int num) //recive number and return the same number written backword.
{
    int answer=0;
    while(num != 0)
    {
        answer = answer*10;
        answer = answer + (num % 10);
        num = num/10;
    }
    return answer;
}

int power(int base, int a) //return base^a
{
    int i, answer=1;
    for(i=0; i<a; i++)
    {
        answer = answer*base;
    }
    return answer;
}

int size(int num) //return how many digits the number have
{
    int count=0;
    while(num != 0)
    {
        count++;
        num = num/10;
    }
    return count;
}

int isArmstrong(int num) //return 1 if num is armstrong number and 0 if not
{
    int sum=0, value=num, digits=size(num);
    while(value != 0)
    {
        sum = sum + power(value%10, digits);
        value = value/10;
    }
    
    if(sum == num)
    {
        return 1;
    }
    return 0;
}

int isPalindrome(int num) //return 1 if num is palindrom number and 0 if not
{
    int reversed = reversedNum(num);
    if(num == reversed)
    {
        return 1;
    }
    return 0;
}
