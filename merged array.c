
#include <stdio.h>

int main()
{
    int a[5]={1,2,3,6,9}, b[5]={4,5,8,11,12}, c[10];
    int i;
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < 5; i++)
    {
        c[5 + i] = b[i];
    }
    printf("Merged array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");

    for( i = 0; i < 9; i++)
    {
        int min = i;
        for( int j = i + 1; j < 10; j++)
        {
            if(c[j] < c[min])
            {
                min = j;
            }
        }

        int temp = c[i];
        c[i] = c[min];
        c[min] = temp;
    }
    printf("Sorted Array:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
