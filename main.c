#include <stdio.h>
#include <math.h>

int circleintersection(int x1, int y1, int r1, int x2, int y2, int r2) {
    float distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    if (distance > r1 + r2) {
        return 0;
    } else if (distance == 0 && r1 == r2) {
        return -1;
    } else if (distance < fabs(r1 - r2)) {
        return 0;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        return 1;
    } else {
        return 2;
    }
}
int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Введіть координати та радіус першого кола (x1, y1, r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);
    printf("Введіть координати та радіус другого кола (x2, y2, r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);
    int intersectionpoints = circleintersection(x1, y1, r1, x2, y2, r2);
    if (intersectionpoints == -1) {
        printf("Кола співпадають, безліч точок перетину\n");
    } else {
        printf("Кількість точок перетину: %d\n", intersectionpoints);
    }
    return 0;
}

