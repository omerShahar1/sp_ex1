#include <stdio.h>
#include "NumClass.h"

int main() 
{
    int max, min, i, a, b;
    scanf("%d %d", &a, &b);

    if(a<b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }

    printf("\nThe Armstrong numbers are: ");
    for(i=min; i<=max; i++)
    {
        if(isArmstrong(i) == 1)
        {
            printf("%d ",i);
        }
    }
    printf("\nThe Palindromes numbers are: ");
    for(i=min; i<=max; i++)
    {
        if(isPalindrome(i) == 1)
        {
            printf("%d ",i);
        }
    }
    printf("\nThe Prime numbers are: ");
    for(i=min; i<=max; i++)
    {
        if(isPrime(i) == 1)
        {
            printf("%d ",i);
        }
    }
    printf("\nThe Strong numbers are: ");
    for(i=min; i<=max; i++)
    {
        if(isStrong(i) == 1)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}


