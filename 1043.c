#include <stdio.h>

int main(){
    double valorA, valorB, valorC, perimetro, area;

    scanf("%lf%lf%lf", &valorA, &valorB, &valorC);

    if(valorA + valorB > valorC && valorA + valorC > valorB && valorB + valorC > valorA){
        perimetro = valorA + valorB + valorC;
        printf("Perimetro = %.1lf\n", perimetro);
    }
    else{
        area = ((valorA + valorB) * valorC) / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}
