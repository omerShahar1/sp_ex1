#include <stdio.h>
#include <math.h>
#include <NumClass.h>


int size(int num, int answer) //count how many digits the number have (recursive)
{
    if(num==0)
    {
        return answer;
    }
    answer++;
    return size(num/10, answer);
}

int reversedNum(int num, int answer) //recive number and return the same number written backword (recursive).
{
    if(num==0)
    {
        return answer;
    }
    answer = answer * 10;
    answer = answer + (num % 10);
    num = num/10;
    return reversedNum(num, answer);
}

int recursiveIsArmstrong(int num, int digits, int sum) //return the sum of the n power of the digits (recursive)
{
    if(num==0)
    {
        return sum;
    }
    sum = sum + pow(num%10, digits);
    num = num/10;
    return isArmstrong(num, digits, sum);
}

int isArmstrong(int num) //return 1 if num is armstrong number and 0 if not
{
    int digits = size(num, 0);
    int sum = recursiveIsArmstrong(num, digits, 0);
    if(num == sum)
    {
        return 1;
    }
    return 0;
}

int isPalindrome(int num) //return 1 if num is palindrome and 0 if not
{
    int reverse = reversedNum(num, 0);
    if(reverse == num)
    {
        return 1;
    }
    return 0;
}