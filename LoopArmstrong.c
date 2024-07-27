#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, temp, r, sum= 0;

    for(i=1; i<=1000; i++)
    {
        temp=i;
        n=i;

        while(n!=0)
        {
            r = n%10;
            sum=sum+pow(r,3);
            n=n/10;
        }
        if((int)sum==i)
        {
            printf("\n %d is an Armstrong Number", i);
        }
        sum=0;
    }
}
