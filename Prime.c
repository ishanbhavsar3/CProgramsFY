#include <stdio.h>

int main()
{
    int p, d, flag;

    printf("Enter the number to check if prime or not.\n");
    scanf("%d", &p);
    flag=1;

    for(d=2; d<=(p-1);d++)
    {
        if(p%d==0||p==1||p==0)
         {
             flag=0;
             break;
         }
    }
    if(flag==0)
            printf("The number %d is not prime", p);
    else
            printf("The number %d is prime", p);
}
