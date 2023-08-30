/**
 * Create numbers which can be similar even in reverse
 * Get user number
 * hold the No temporarily
 * Reverse it
 * compare it in reverse
 * If both are similar print them
*/
#include <stdio.h>

int main()
{
    int n,r,sum = 0,temp;
    
    printf("Enter the number:");
    scanf("%d",&n);
    temp = n;
    while (n > 0)
    {
        r = n%10;
        sum = (sum * 10) + r;
        n = n/10;
    }

    if (temp == sum)

    printf("Palindrome number!");

    else
    
    printf("Oops not Palindreome number!");

    return 0;
    
}
