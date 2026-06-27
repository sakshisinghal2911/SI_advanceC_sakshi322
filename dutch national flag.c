#include <stdio.h>
int main() {
    int arr[100], n, i;
    int low = 0, mid = 0, high;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements (only 0, 1, 2):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            // swap arr[low] and arr[mid]
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { 
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
        }
    }
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}