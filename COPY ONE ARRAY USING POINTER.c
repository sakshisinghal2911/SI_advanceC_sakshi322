#include<stdio.h>
int main()
{
    int arr1[100],arr2[100];
    int n,i;
    int *ptr1,*ptr2;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    ptr1=arr1;
    ptr2=arr2;
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr1+i);
    }
    for(i=0;i<n;i++)
    {
        *(ptr2+i)=*(ptr1+i);
    }
    printf("copied array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr2+i));
    }
    return 0;
}