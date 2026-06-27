#include <stdio.h>
int main() {
    int arr[100], n, i;
    int left = 0, right, leftMax = 0, rightMax = 0;
    int water = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter heights:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    right = n - 1;
    while (left <= right) {
        if (arr[left] <= arr[right]) {
            if (arr[left] >= leftMax)
                leftMax = arr[left];
            else
                water += leftMax - arr[left];
            left++;
        }
        else {
            if (arr[right] >= rightMax)
                rightMax = arr[right];
            else
                water += rightMax - arr[right];
            right--;
        }
    }
    printf("Total trapped rain water = %d\n", water);

    return 0;
}