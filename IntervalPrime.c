#include <stdio.h>

int main()
{
    int c1, c2, d, p;


    printf("Enter Your First Number\n");
    scanf("%d", &c1);
    printf("Enter Your Last Number\n");
    scanf("%d", &c2);


    for(d=c1; d<=c2; d++)
    {
        for(p=2; p<=d; p++)
        {
            if(d%p==0)
            {
                break;
            }
        }

        if(p==d)
        {
            printf("%d\t",d);
        }
    }

}
