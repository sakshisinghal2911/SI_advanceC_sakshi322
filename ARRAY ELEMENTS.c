#include<stdio.h>
int main() {
    intarr[100],n,*ptr,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr=arr;
    printf("Enter the elements: ");
    for(i=0;i<n;i++) {
        scanf("%d",ptr+i);
    }
    printf("array elements are: ");
    for(i=0;i<n;i++) {
        printf("%d ",*(ptr+i));
    }
    return 0;
}