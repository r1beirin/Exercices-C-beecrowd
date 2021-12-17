#include <stdio.h>

int main(){
    int notaCem, notaCinquenta, notaVinte, notaDez, notaCinco, notaDois, moeda1, moeda50, moeda25, moeda10, moeda005;
    double N, moeda001;

    scanf("%lf", &N);
    notaCem = N / 100;
    N = N - (notaCem * 100);
    notaCinquenta = N / 50;
    N = N - (notaCinquenta * 50);
    notaVinte = N / 20;
    N = N - (notaVinte * 20);
    notaDez = N / 10;
    N = N - (notaDez * 10);
    notaCinco = N / 5;
    N = N - (notaCinco * 5);
    notaDois = N / 2;
    N = N - (notaDois * 2);

    moeda1 = N / 1;
    N = N - (moeda1 * 1);
    moeda50 = N / 0.5;
    N = N - (moeda50 * 0.5);
    moeda25 = N / 0.25;
    N = N - (moeda25 * 0.25);
    moeda10 = N / 0.1;
    N = N - (moeda10 * 0.1);
    moeda005 = N / 0.05;
    N = N - (moeda005 * 0.05);
    moeda001 = N / 0.01;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notaCem);
    printf("%d nota(s) de R$ 50.00\n", notaCinquenta);
    printf("%d nota(s) de R$ 20.00\n", notaVinte);
    printf("%d nota(s) de R$ 10.00\n", notaDez);
    printf("%d nota(s) de R$ 5.00\n", notaCinco);
    printf("%d nota(s) de R$ 2.00\n", notaDois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda005);
    printf("%.0lf moeda(s) de R$ 0.01\n", moeda001);

    return 0;
}
