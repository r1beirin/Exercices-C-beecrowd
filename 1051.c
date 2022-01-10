#include <stdio.h>

int main(){
    double salario, calculoImposto;

    scanf("%lf", &salario);
    
    //Isento
    if(salario <= 2000){
        printf("Isento\n");
    }
    //8%
    if(salario >= 2000.01 && salario <= 3000){
        salario = salario - 2000;
        calculoImposto = salario * 0.08;
        printf("R$ %.2lf\n", calculoImposto);
    }
    //18%
    if(salario >= 3000.01 && salario <= 4500){
        salario = salario - 3000;
        calculoImposto = (1000 * 0.08) + (0.18 * salario);
        printf("R$ %.2lf\n", calculoImposto);
    }
    //28%
    if(salario > 4500){
        salario = salario - 4500;
        calculoImposto = (1000 * 0.08) + (1500 * 0.18) + (0.28 * salario);
        printf("R$ %.2lf\n", calculoImposto);
    }
    
    return 0;
}
