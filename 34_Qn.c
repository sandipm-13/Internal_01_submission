//24.Calculate Area and Perimeter of a Rectangle using Pointers

#include <stdio.h>
void calc(int *length, int *breadth, int *area, int *perimeter) {
    *area = (*length) * (*breadth);
    *perimeter = 2 * ((*length) + (*breadth));
}

int main() {
    int length, breadth, area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    calc(&length, &breadth, &area, &perimeter);

    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);

    return 0;
}