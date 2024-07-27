#include <stdio.h>

long fact(int n)
{
    if(n==1)
        return 1;
    else
        return(n*fact(n-1));
}
void main()
{
    int a; long store= 0;
    printf("Please enter a number for factorial.");
    scanf("\n%d", &a);
    store = fact(a);
    printf("The factorial of %d is %ld", a, store);
}

