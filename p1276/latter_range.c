#include <stdio.h>

int main() {
    char a[100];
    int i, j, k;

    while (fgets(a, sizeof(a), stdin) != NULL) {

        // Remove spaces and newline
        int n = 0;

        for (i = 0; a[i] != '\0'; i++) {
            if (a[i] >= 'a' && a[i] <= 'z') {
                a[n] = a[i];
                n++;
            }
        }

        a[n] = '\0';

        // If input is empty
        if (n == 0) {
            printf("\n");
            continue;
        }

        // Sort letters
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    char temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        // Remove duplicate letters
        k = 0;

        for (i = 0; i < n; i++) {
            if (i == 0 || a[i] != a[i - 1]) {
                a[k] = a[i];
                k++;
            }
        }

        a[k] = '\0';
        n = k;

        // Print ranges
        i = 0;
        int first = 1;

        while (i < n) {

            char start = a[i];

            while (i + 1 < n && a[i + 1] == a[i] + 1) {
                i++;
            }

            char end = a[i];

            if (!first) {
                printf(", ");
            }

            printf("%c:%c", start, end);

            first = 0;
            i++;
        }

        printf("\n");
    }

    return 0;
}