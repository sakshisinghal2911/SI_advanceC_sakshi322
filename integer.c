#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf ("enter an integer:");
    scanf("%d",&a);
    printf ("enter a float:");
    scanf("%f",&b);
    printf ("enter a character:");
    scanf("%c",&c);
    printf("\n integer =%d",a);
    printf("\nfloat =%.2f",b);
    printf("\ncharacter =%c",c);
    return 0;
}