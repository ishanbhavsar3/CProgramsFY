#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0, temp, r;
    printf("Please enter a number to check amstrong or not.\n");
    scanf("%d", &n);
    temp=n;
    while(n!=0)
    {
        r = n%10;
        sum=sum+(int)pow(r,3);
        n = n/10;
    }
    if((int)sum==temp)
        {
            printf("\n %d is an Armstrong Number", temp);
        }
}
