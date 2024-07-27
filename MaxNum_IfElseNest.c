#include <stdio.h>

void main()
{
    printf("Please input 3 numbers.(leave space)\n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if(a>=b)
        if(a>=c)
            printf("The largest number is %f", a);
        else
            printf("The largest number is %f", c);
    else
        if(b>=c)
            printf("The largest number is %f", b);
        else
            printf("The largest number is %f", c);

}
