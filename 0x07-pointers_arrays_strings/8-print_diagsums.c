#include <stdio.h>

void print_diagsums(int *a, int size) {
    int sum_primary = 0;
    int sum_secondary = 0;

    for (int i = 0; i < size; i++) {
        sum_primary += a[i * size + i];  // Sum of the primary diagonal
        sum_secondary += a[i * size + (size - 1 - i)];  // Sum of the secondary diagonal
    }

    printf("%d, %d\n", sum_primary, sum_secondary);
}
