#include <stdio.h>

int main()
{
    int m, n, r, a, b;
    printf("Input two numbers to get their GCD & LCM\n");
    scanf("%d%d",&m, &n);
    a = m;
    b = n;

    do
    {
        r = m%n;
        m = n;
        n = r;
    }
    while(r!=0);

    printf("%d is the GCD", m);

    printf("\n%d is the LCM", ((a*b)/m));
}
