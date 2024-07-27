#include <stdio.h>

int fibo(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return(fibo(n-1)+fibo(n-2));
}
void main()
{
    int a, n;
    printf("Enter a number to get Fibonacci sequence till that term.\n");
    scanf("%d", &n);

    printf("First N terms of Fibonacci sequence are:\n");
    for(int i = 1; i<=n; i++)
    {
        printf("%d ", fibo(i));
    }
}

