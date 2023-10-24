#include <stdio.h>

int main() {
    int n, first = 1, second = 2, next;

    for (n = 1; n <= 98; n++) {
        if (n == 98) {
            printf("%d\n", first);
        } else {
            printf("%d, ", first);
        }

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
