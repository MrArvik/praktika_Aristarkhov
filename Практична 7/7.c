#include <stdio.h>
#include <math.h>

int countIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // Обчислюємо відстань між центрами кола
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Перевіряємо умови перетину
    if (distance > r1 + r2) {
        // Кола не перетинаються
        return 0;
    } else if (distance < fabs(r1 - r2)) {
        // Одне коло повністю знаходиться всередині іншого кола
        return 0;
    } else if (distance == 0 && r1 == r2) {
        // Кола співпадають одне з одним
        return -1;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Кола торкаються одне одного зовні або всередині
        return 1;
    } else {
        // Кола перетинаються у двох точках
        return 2;
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates and radii of the first circle (x1, y1, r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);
    printf("Enter the coordinates and radii of the second circle (x2, y2, r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);

    // Виклик функції countIntersectionPoints для визначення кількості точок перетину
    int intersectionPoints = countIntersectionPoints(x1, y1, r1, x2, y2, r2);

    // Виведення результату на екран
    printf("Number of intersection points: %d\n", intersectionPoints);

    return 0;
}
