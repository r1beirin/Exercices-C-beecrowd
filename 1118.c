#include <stdio.h>
#include <stdbool.h>

int main(){
    int comecarNovamente;
    double nota, soma = 0, media = 0, i = 0, continuar = 1;
    
    while(continuar == 1){
        scanf("%lf", &nota);

        if(nota >= 0 && nota <= 10){
            soma += nota;
            i++;

            if(i == 2){
                media = soma / 2;
                printf("media = %.2lf\n", media);
                soma = 0;
                i = 0;

                while(1){
                    printf("novo calculo (1-sim 2-nao)\n"); 
                    scanf("%d", &comecarNovamente);

                    if(comecarNovamente == 1){
                        continuar = 1;
                        break;
                    }
                    if(comecarNovamente == 2){
                        continuar = 2;
                        break;
                    }
                }
            }
        }
        else printf("nota invalida\n");
    }

    return 0;
}
