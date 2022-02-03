#include <stdio.h>

int main(){
    double nota, notaValida, soma = 0, media, i = 0;

    while (1){
        scanf("%lf", &nota);

        if(nota >= 0 && nota <= 10){
            soma += nota;
            i++;

            if(i == 2){
                media = soma / 2;
                printf("media = %.2lf\n", media);
                break;
            }
        }
        else printf("nota invalida\n");
    }
    

    return 0;
}
