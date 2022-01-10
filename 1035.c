#include <stdio.h>

int main(){
    int valorA, valorB, valorC, valorD, somaCD, somaAB;
    scanf("%d%d%d%d", &valorA, &valorB, &valorC, &valorD);

    somaCD = valorC + valorD;
    somaAB = valorA + valorB;
    if(valorB > valorC && valorD > valorA && somaCD > somaAB && valorC > 0 && valorD > 0 && valorA % 2 == 0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
    
    return 0;
}
