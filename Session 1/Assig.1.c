#include <stdio.h>

int main() {
    int i, space, rows = 6, k = 0;

    for (i = 1; i <= rows; i++, k = 0) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        while (++k != 2 * i) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}