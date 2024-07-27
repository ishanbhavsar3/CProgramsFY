#include <stdio.h>

void main()
{
   int n1=0, n2=1, sum, n, i;
   scanf("%d", &n);
   printf("1 ");
   for(i=1; i<n; i++)
   {
       sum = n1+n2;
       n1=n2;
       n2=sum;
       printf("%d ", sum);
   }
}
