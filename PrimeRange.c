#include <stdio.h>

int main()
{
    int c1, c2, d, p;

    printf("Enter two numbers leave space.\n");
    scanf("%d%d", &c1, &c2);

    for(d=c1; d<=(c2);d++)
    {
        for(p=2; p<=d;p++)
        {
            if(d%p==0)
            {
                break;
            }
        }
        if(p==d)
            printf("\n%d\n", d);
    }
}
