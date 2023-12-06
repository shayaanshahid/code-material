#include <stdio.h>

int main() {
    int n, space;
    do {
        printf("Enter the number of rows (odd number): ");
        scanf("%d", &n);

        if (n % 2 == 0) {
            printf("Please enter an odd number for the diamond pattern.\n");
        }
    } while (n % 2 == 0);
    for (int i = 1; i <= n; i += 2) {
        for (space = 0; space < (n - i) / 2; space++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 1; i -= 2) {
        for (space = 0; space < (n - i) / 2; space++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
