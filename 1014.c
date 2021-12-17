#include <stdio.h>

int main() {
    int X;
    double Y, calculoConsumo;

    scanf("%d%lf", &X, &Y);
    calculoConsumo = X/Y;
    printf("%.3lf km/l\n", calculoConsumo);

    return 0;
}
