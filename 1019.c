#include <stdio.h>

int main() {
    int N, horas, minutos, segundos;

    scanf("%d", &N);
    // Dividir N por 1h (3600s)
    horas = (N * 1.0) / 3600;
    // Tirar as horas (convertidos em segundos) e deixar apenas os minutos
    minutos = (N - (horas * 3600)) / 60;
    // Tirar as horas (convertidos em segundos) e tirar os minutos (convertidos em segundos)
    segundos = N - (horas * 3600) - (minutos * 60);
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
