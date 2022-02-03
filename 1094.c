#include <stdio.h>

int main(){
    int i = 0, n, quantia, rato = 0, sapo = 0, coelho = 0, total = 0;
    double percCoelho, percRato, percSapo, xCoelho, yRato, zSapo;
    char tipo;

    scanf("%d", &n);

    for(i; i < n; i++){
        scanf("%d %c", &quantia, &tipo);
        total += quantia;

        if(tipo == 'C') coelho += quantia;
        if(tipo == 'R') rato += quantia;
        if(tipo == 'S') sapo += quantia;
    }

    xCoelho = coelho;
    percCoelho = (xCoelho / total) * 100;
    yRato = rato;
    percRato = (yRato / total) * 100;
    zSapo = sapo;
    percSapo = (zSapo / total) * 100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2lf %%\n", percCoelho);
    printf("Percentual de ratos: %.2lf %%\n", percRato);
    printf("Percentual de sapos: %.2lf %%\n", percSapo);

    return 0;
}
