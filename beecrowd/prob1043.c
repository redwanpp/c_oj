//Triangle

#include <stdio.h>

int main() {
    double value1, value2, value3, perimeter, area;

    scanf("%lf %lf %lf", &value1, &value2, &value3);

    if((value1 + value2 > value3) && (value2 + value3 > value1) && (value3 + value1 > value2)) {
        perimeter = value1 + value2 + value3;
        printf("Perimetro = %.1lf\n", perimeter);
    }
    else {
        area = ((value1 + value2) / 2) * value3;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}