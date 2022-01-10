#include <stdio.h>

int main(){
    double salario, salarioNovo;

    scanf("%lf", &salario);

    if(0 <= salario && salario <= 400){
        salarioNovo = 1.15 * salario;
        printf("Novo salario: %.2lf\n", salarioNovo);
        printf("Reajuste ganho: %.2lf\n", salario * 0.15);
        printf("Em percentual: 15 %%\n");
    }
    if(400.01 <= salario && salario <= 800){
        salarioNovo = 1.12 * salario;
        printf("Novo salario: %.2lf\n", salarioNovo);
        printf("Reajuste ganho: %.2lf\n", salario * 0.12);
        printf("Em percentual: 12 %%\n");
    }
    if(800.01 <= salario && salario <= 1200){
        salarioNovo = 1.1 * salario;
        printf("Novo salario: %.2lf\n", salarioNovo);
        printf("Reajuste ganho: %.2lf\n", salario * 0.1);
        printf("Em percentual: 10 %%\n");
    }
    if(1200.01 <= salario && salario <= 2000){
        salarioNovo = 1.07 * salario;
        printf("Novo salario: %.2lf\n", salarioNovo);
        printf("Reajuste ganho: %.2lf\n", salario * 0.07);
        printf("Em percentual: 7 %%\n");
    }
    if(salario > 2000){
        salarioNovo = 1.04 * salario;
        printf("Novo salario: %.2lf\n", salarioNovo);
        printf("Reajuste ganho: %.2lf\n", salario * 0.04);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
