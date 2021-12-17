#include <stdio.h>

int main() {
    int idade, ano, mes, dia;
    
    scanf("%d", &idade);
    ano = idade / 365;
    //ex: idade = 400
    //subtrair 400 - 365 (1 ano) = 35 e dividir por meses (30 dias) = 1 mes
    mes = (idade - (ano * 365)) / 30;
    //subtrair o ano e o mes, resultado apenas nos dias
    dia = idade - (ano * 365) - (mes * 30);
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}
