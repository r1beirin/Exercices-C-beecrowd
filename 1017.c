#include <stdio.h>

int main() {
    int tempo, velMedia, distancia;
    double qtdCombustivel;
    
    scanf("%d%d", &tempo, &velMedia);
    // S = Vm * T || 12km / 1 litro
    qtdCombustivel = (velMedia * tempo) / 12.0;
    printf("%.3lf\n", qtdCombustivel);

    return 0;
}
