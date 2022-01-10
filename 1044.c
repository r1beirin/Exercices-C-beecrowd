#include <stdio.h>

int main(){
    int valorA, valorB;

    scanf("%d%d", &valorA, &valorB);

    if(valorA % valorB == 0 || valorB % valorA == 0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
