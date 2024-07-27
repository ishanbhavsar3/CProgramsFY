#include <stdio.h>

void main()
{
    int a, i; long f =1;

    scanf("%d", &a);

    for(i=1; i<=a; i++)
    {
        f=f*i;
    }
    printf("The factorial of a is %ld", f);
}
