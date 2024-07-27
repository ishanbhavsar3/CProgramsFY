#include <stdio.h>
#include <math.h>

float root(float r)
{
    float a, b, c;
    c=sqrt(r);
    a=ceil(c);
    b=floor(c);
    if(a==b)
        return 1.0;
    else
        return 0.0;
}

void main()
{
    int flag; float r;
    scanf("%f", &r);
    flag=root(r);
    {
        if(flag==1)
            printf("%f is squarenum", r);
        else
            printf("%f is not squarenum", r);
    }

}
