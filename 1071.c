#include <stdio.h>

int main(){
    int x, y, soma = 0, i;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y){
        for(i = y; i < x; i++){
            if(i == y) continue;
            if(i % 2 == 0) continue;
            //printf("%d\n", i);
            soma += i;
        }
    }
    else if(x < y){
        for(i = x; i < y; i++){
            if(i == x) continue;
            if(i % 2 == 0) continue;
            soma += i;
            //printf("%d\n", i);
        }
    }

    printf("%d\n", soma);
    return 0;
}
