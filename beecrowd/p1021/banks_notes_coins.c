
// #include <stdio.h>

// int main() {
//     double n;
//     scanf("%lf", &n);

//     int cents = (int)(n * 100 + 0.5);

//     int notes[] = {10000, 5000, 2000, 1000, 500, 200};
//     int coins[] = {100, 50, 25, 10, 5, 1};

//     printf("NOTAS:\n");
//     for (int i = 0; i < 6; i++) {
//         int x = cents / notes[i];
//         printf("%d nota(s) de R$ %.2f\n", x, notes[i] / 100.0);
//         cents %= notes[i];
//     }

//     printf("MOEDAS:\n");
//     for (int i = 0; i < 6; i++) {
//         int x = cents / coins[i];
//         printf("%d moeda(s) de R$ %.2f\n", x, coins[i] / 100.0);
//         cents %= coins[i];
//     }

//     return 0;
// }
