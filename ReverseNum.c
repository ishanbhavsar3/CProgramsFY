#include <stdio.h>

int main()
{
    int n, rev = 0, temp, r;

    printf("Please enter a number to reverse it.\n");
    scanf("%d", &n);

    temp=n;
    while(n!=0)
    {
        r = n%10; /*extracted the last digit*/
        rev = rev*10+r; /* calculated reverse*/
        n = n/10; /* reduced the number by 1 digit*/
    }

    printf("\nThe reverse of the number %d is %d", temp, rev);
}
