#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, calculoDistancia, calculoX2X1, calculoY2Y1;
    
    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);
    calculoX2X1 = (x2 - x1) * (x2 - x1);
    calculoY2Y1 = (y2 - y1) * (y2 - y1);
    calculoDistancia = sqrt(calculoX2X1 + calculoY2Y1);
    printf("%.4lf\n", calculoDistancia);

    return 0;
}
