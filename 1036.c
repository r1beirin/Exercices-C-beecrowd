#include <stdio.h>
#include <math.h>

int main(){
    double valorA, valorB, valorC, x1, x2, calculoDelta;

    scanf("%lf%lf%lf", &valorA, &valorB, &valorC);

    calculoDelta = (valorB*valorB) - 4 * valorA * valorC;
    x1 = (- valorB + sqrt(calculoDelta)) / (2 * valorA);
    x2 = (- valorB - sqrt(calculoDelta)) / (2 * valorA);

    if(valorA == 0 || calculoDelta < 0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    } // 10.0 3.0 5.0

    return 0;
}
