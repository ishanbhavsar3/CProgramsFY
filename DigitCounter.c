#include <stdio.h>

int main()
{
    int n, i=0;
    scanf("%d",&n);

    do
    {
        n/=10;
        ++i;
    }
    while(n!=0);

    printf("%d is the number of digits in the input", i);
}
