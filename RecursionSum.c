#include <stdio.h>

long sum(int n)
{
    if(n==1)
        return 1;
    else
        return(n+sum(n-1));
}
void main()
{
    int a; long store= 0;
    printf("Please enter a number to get its sum until the number.\n");
    scanf("%d", &a);
    store = sum(a);
    printf("The sum until %d is %ld", a, store);
}

