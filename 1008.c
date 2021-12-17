#include <stdio.h>
 
int main() {
    int numero, horas_trabalhadas;
    float recebe_horas, salario;
    
    scanf("%d%d%f", &numero, &horas_trabalhadas, &recebe_horas);
    salario = recebe_horas * horas_trabalhadas;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);
 
    return 0;
}
