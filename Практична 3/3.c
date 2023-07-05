#include <stdio.h>

int main() {
    int p;
    printf("Enter the number of digits (p): ");
    scanf("%d", &p);

    // Ініціалізація масиву dp
    int dp[p + 1];
    dp[1] = 2;
    dp[2] = 4;

    // Обчислення кількості чисел для кожного розряду
    for (int i = 3; i <= p; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    printf("The number of numbers with %d digits: %d\n", p, dp[p]);

    return 0;
}


