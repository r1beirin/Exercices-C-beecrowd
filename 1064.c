#include <stdio.h>

int main(){
    double num, soma = 0, media = 0;
    int valoresPos = 0, i;

    for(i = 0; i < 6; i++){
        scanf("%lf", &num);
        if(num > 0){
            valoresPos++;
            soma += num;
        }
    }

    printf("%d valores positivos\n", valoresPos);
    media = soma / valoresPos;
    printf("%.1lf\n", media);
    return 0;
}
