#include <stdio.h>

int main() {
    int valor, notaCem, notaCinquenta, notaVinte, notaDez, notaCinco, notaDois, notaUm;
    
    scanf("%d", &valor);
    //ex 576 / 100 = 5 resto 76
    notaCem = valor / 100; 
    //preciso tirar os 500 que foram utilizados na nota cem, mas como?
    //ex 576 - 500 = 76 / 50
    notaCinquenta = (valor - (notaCem * 100)) / 50;
    //preciso tirar os 50 que foram utilizados na nota cinquenta
    //ex 76 - 50 = 26 / 20
    notaVinte = (valor - (notaCem * 100) - (notaCinquenta * 50)) / 20;
    //preciso tirar os 20 que foram utilizados na nota 20
    //ex 26 - 20 = 6 / 10
    notaDez = (valor - (notaCem * 100) - (notaCinquenta * 50) - (notaVinte * 20)) / 10;
    //tirar 10 que foram utilizados na nota 10
    //ex 6 - 0 (nos 576 a saida é 0 pois nao utiliza cedula dez) = 6 / 5
    notaCinco = (valor - (notaCem * 100) - (notaCinquenta * 50) - (notaVinte * 20) - (notaDez * 10)) / 5;
    //no ex: tirar 5 reais
    //no ex: sobrou 1 real
    notaDois = (valor - (notaCem * 100) - (notaCinquenta * 50) - (notaVinte * 20) - (notaDez * 10) - (notaCinco * 5)) / 2;
    //no ex: tirar 2 reais
    notaUm = (valor - (notaCem * 100) - (notaCinquenta * 50) - (notaVinte * 20) - (notaDez * 10) - (notaCinco * 5) - (notaDois * 2)) / 1;
    
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", notaCem);
    printf("%d nota(s) de R$ 50,00\n", notaCinquenta);
    printf("%d nota(s) de R$ 20,00\n", notaVinte);
    printf("%d nota(s) de R$ 10,00\n", notaDez);
    printf("%d nota(s) de R$ 5,00\n", notaCinco);
    printf("%d nota(s) de R$ 2,00\n", notaDois);
    printf("%d nota(s) de R$ 1,00\n", notaUm);

    return 0;
}
