#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; // змінна n
    printf("Enter a natural number n (1 < n < 150): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) { // перевірка коректності значення n
        printf("Invalid value of n. Please enter a number within the range of 1 and 150.\n");
        return 1;
    }

    int count = 0; // лічильник рівних дільників
    for (int m = 1; m <= n; m++) { // перебір всіх можливих значень m від 1 до n
        if (n % m == n / m) { // перевірка, чи є m рівним дільником n
            count++;
        }
    }
    printf("The number of equal divisors of a number %d: %d\n", n, count); // виведення інформації
    return 0;
}
