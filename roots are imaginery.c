#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c,d,r1,r2;
    printf("enter a,b and c");
    scanf("%f %f %f", &a, &b, &c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("root 1=%.2f\n",r1);
        printf("root 2=%.2f\n",r2);
    }
    else
    {
        printf("roots are imaginary");
    }
    return 0;
}