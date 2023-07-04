#include <stdio.h>
#include <math.h>

long long countNumbers(int r) {
    // Кількість чисел з p розрядів, використовуючи цифри 5 та 9
    long long totalNumbers = pow(2, r);

    // Кількість чисел, де три однакові цифри стоять поруч
    long long excludedNumbers = r - 2;

    // Кількість чисел, де три однакові цифри не стоять поруч
    long long count = totalNumbers - excludedNumbers;

    return count;
}

int main() {
    int r;

    // Введення кількості розрядів
    printf("Enter the number of digits (digits <= 30) : ");
    scanf("%d", &r);

    // Перевірка на валідність введених даних
    if (r < 0 || r > 30) {
        printf("Invalid input!\n");
        return 0;
    }

    // Обчислення та виведення результату
    long long result = countNumbers(r);
    printf("Count of numbers with %d digits: %lld\n", r, result);

    return 0;
}
