#include <stdio.h>
#include <math.h>

// Функція для обчислення довжини вектора
double vectorLength(int x1, int y1, int x2, int y2) {
    int deltaX = x2 - x1;  // Різниця між координатами x2 і x1
    int deltaY = y2 - y1;  // Різниця між координатами y2 і y1
    double length = sqrt(deltaX * deltaX + deltaY * deltaY);  // Формула обчислення довжини вектора
    return length;
}

int main() {
    int x1, y1, x2, y2;
    printf("Enter the coordinates of the vector's starting point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the vector's end point (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Виклик функції vectorLength для обчислення довжини вектора
    double length = vectorLength(x1, y1, x2, y2);

    // Виведення результату на екран з точністю до шести знаків після коми
    printf("Vector length: %.6f\n", length);

    return 0;
}

