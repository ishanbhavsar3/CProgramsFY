#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;

    printf("Enter a number till which you want four's table.\n");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        printf("\n%d*4=%d\n", i, (i*4));
    }
}
