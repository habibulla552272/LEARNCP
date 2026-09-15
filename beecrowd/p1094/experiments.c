#include <stdio.h>
#include <ctype.h>

int main() {

    int n;
    int value;
    int c = 0, r = 0, s = 0;

    char type;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d %c", &value, &type);

        type = toupper(type);

        if (type == 'C') {
            c += value;
        }
        else if (type == 'R') {
            r += value;
        }
        else if (type == 'S') {
            s += value;
        }
    }

    int total = c + r + s;

    double c_percent = (double)c / total * 100;
    double r_percent = (double)r / total * 100;
    double s_percent = (double)s / total * 100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);

    printf("Percentual de coelhos: %.2f %%\n", c_percent);
    printf("Percentual de ratos: %.2f %%\n", r_percent);
    printf("Percentual de sapos: %.2f %%\n", s_percent);

    return 0;
}