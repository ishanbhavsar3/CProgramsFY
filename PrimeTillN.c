#include<stdio.h>

void main()
{
    int a,i,count,n;
    printf("Enter the number till which you want prime numbers.");
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {
        count=0;

        for(i=2; i<=a/2; i++)
        {
             if(a%i==0)
             {
                 count+=1;
                 break;
             }
        }

         if(count==0 && a!= 1)
             printf("%d ",a);
    }
}
