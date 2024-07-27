#include <stdio.h>

void main()
{
    printf("Please input 3 numbers.(leave space)\n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    printf("Largest of three numbers is %f", (a>b)?(a>c?a:c):(b>c?b:c));
}
