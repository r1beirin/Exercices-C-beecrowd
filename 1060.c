#include <stdio.h>

int main(){
    double num;
    int i, valoresPos = 0;

    for(i = 0; i < 6; i++){
        scanf("%lf", &num);
        if(num > 0){
            valoresPos++;
        }
    }

    printf("%d valores positivos\n", valoresPos);
    return 0;
    }
