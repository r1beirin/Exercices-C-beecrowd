#include <stdio.h>

int main() {
    int velX = 60, velY = 90, distancia, tempo;

    // carro y = 90 km || carro x = 60 km || diferença de 30km (Y -> X) - 0.5km / min de diferença ou 1km / 2min de dif
    scanf("%d", &distancia);
    tempo = distancia / 0.5;
    printf("%d minutos\n", tempo);

    return 0;
}
