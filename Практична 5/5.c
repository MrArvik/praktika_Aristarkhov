#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);

    int dp[10001]; // Масив для збереження кількості допустимих послідовностей
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= n; i++) {  // обчислює кількість допустимих послідовностей для кожної довжини від 3 до n
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 12345; // рекурентне відношення
    }

    printf("The number of valid sequences: %d\n", dp[n]); // виводить результат
    return 0;
}
