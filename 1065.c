#include <stdio.h>

int main(){
    int val, qtd = 0, i;

    for(i = 0; i < 5; i++){
        scanf("%d", &val);
        if(val % 2 == 0){
            qtd++;
        }
    }

    printf("%d valores pares\n", qtd);

    return 0;
}
