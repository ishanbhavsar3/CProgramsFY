#include <stdio.h>
#include <math.h>

float power(float a, int b)
{
    if(b==0)
        return 1.0;

    else
        return(a*power(a, b-1));
}

void main()
{
    float m, store; int n;
    printf("Enter two numbers, one decimal, the next integer.\n");
    scanf("%f%d", &m, &n);
    store = power(m,n);
    printf("\n%f raised to %d is %f", m, n, store);
}

