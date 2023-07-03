#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time;

    // Введення значень t1, t2, t3
    printf("t1: ");
    scanf("%d", &t1);

    printf("t2: ");
    scanf("%d", &t2);

    printf("t3: ");
    scanf("%d", &t3);

    // Обчислення загального часу
    total_time = (double)(1.0 / t1 + 1.0 / t2 + 1.0 / t3);

    // Виведення результату
    printf("%.2f\n", 1.0 / total_time);

    return 0;
}
