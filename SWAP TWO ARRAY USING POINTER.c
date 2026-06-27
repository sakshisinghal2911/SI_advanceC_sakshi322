#include<stdio.h>
int main()
{
    int arr1[100], arr2[100], i, n,temp;
    int*p1,*p2;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    p1=arr1;
    p2=arr2;
    printf("Enter the elements of the first array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p1+i);
    }
    printf("enter elements of second array :\n");
    for(i=0;i<n;i++)
    {
        sanf("%d",p2+i);
    
    }
    for(i=0;i<n;i++)
    {
        temp =*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=temp;
    }
    printf("first array after swapping:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",*(p1+i));
    }
    printf("\nsecond array after swapping:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",*(p2+i));
    }
    return 0;
}