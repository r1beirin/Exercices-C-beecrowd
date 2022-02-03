#include <stdio.h>

int main(){
    int m, n, i;

    while(1){
        scanf("%d%d", &m, &n);
        int menor = 0, maior = 0, soma = 0;

        if(m <= 0 || n <= 0){
            break;
        }
        else{
            if(m == n){
                printf("%d ", m);
                printf("Sum=%d\n", m);
                continue;
            }
            if(m > n){
                maior = m;
                menor = n;
            }
            if(n > m){
                maior = n;
                menor = m;
            }

            for(i = menor; i <= maior; i++){
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
        }
    }

    return 0;
}
