#include <stdio.h>

void moveDisk(int n, char from, char to, char aux) {
    if (n == 0) {
        return;
    }
    moveDisk(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    moveDisk(n - 1, aux, to, from);
}

int main(void) {
    int disks;
    printf("Enter number of disks: ");
    if (scanf("%d", &disks) != 1 || disks <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Tower of Hanoi solution for %d disks:\n", disks);
    moveDisk(disks, 'A', 'C', 'B');
    return 0;
}