#include <stdio.h>

int main(){
    int i = 0, n, maior = 0, posicao = 1;

    for(i; i < 100; i++){
        scanf("%d", &n);
        
        if(i == 0){
            maior = n;
            posicao = 1;
            continue;
        }
        if(n > maior){
            maior = n;
            posicao = i + 1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}
