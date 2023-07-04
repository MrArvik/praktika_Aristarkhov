#include <stdio.h>

// Функція для знаходження найбільшого спільного дільника (НСД)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Функція для знаходження найменшого спільного кратного (НСК)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int p, i;
    int numbers[20];
    int result;

    // Введення кількості чисел p
    printf("Enter the number of values p: ");
    scanf("%d", &p);

    // Введення чисел
    printf("Enter %d numbers separated by space: ", p);
    for (i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }

    // Знаходження НСК заданих чисел
    result = numbers[0];
    for (i = 1; i < p; i++) {
        result = lcm(result, numbers[i]);
    }

    // Виведення результату
    printf("Least Common Multiple: %d\n", result);

    return 0;
}
