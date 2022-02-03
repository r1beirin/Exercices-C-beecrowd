#include <stdio.h>

int main(){
    int n, x, y, i = 0, w, z, soma = 0;

    scanf("%d", &n);
    
    for(i; i < n; i++){
        scanf("%d%d", &x, &y);

        if(x > y){
            for(w = y + 1; w < x; w++){
                if(w % 2 != 0) soma += w;
            }
            printf("%d\n", soma);
            soma = 0;
        }
        else if(y > x){
            for(z = x + 1; z < y; z++)
                if(z % 2 != 0) soma += z;
            printf("%d\n", soma);
            soma = 0;
        }
        else printf("0\n");

    }

    return 0;
}
