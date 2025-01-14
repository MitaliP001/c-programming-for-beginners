#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int start, end;

    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}