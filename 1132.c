#include <stdio.h>

int main(){
    int x, y, i = 0, soma = 0;

    scanf("%d%d", &x, &y);

    //decrescente
    if(x > y){
        for(i = y; i <= x; i++){
            if(i % 13 != 0){
                soma += i;
            }
        }
    }
    //crescente
    if(y > x){
        for(i = x; i <= y; i++){
            if(i % 13 != 0){
                soma += i;
            }
        }
    }

    printf("%d\n", soma);
    return 0;
}
