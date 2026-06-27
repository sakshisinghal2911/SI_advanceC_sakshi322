#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int x, y;
    printf("Enter two integers: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}