#include <stdio.h>

int main()
{
    int n, sum = 0, temp, r;

    printf("Please enter a number to find sum of digits.\n");
    scanf("%d", &n);

    temp=n;
    while(n!=0)
    {
        r = n%10; /*extracted the last digit*/
        sum = sum+r; /* calculated sum*/
        n = n/10; /* reduced the number by 1 digit*/
    }

    printf("\nThe sum of the digits %d is %d", temp, sum);
}
