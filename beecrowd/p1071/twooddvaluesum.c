#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    int sum = 0;
    int small, big;

    if (a > b) {
        small = b;
        big = a;
    } else {
        small = a;
        big = b;
    }

    for (int i = small + 1; i <= big - 1; i++) {

        if (i % 2 != 0) {
            sum = sum + i;
        }
    }

    printf("%d\n", sum);

    return 0;
}