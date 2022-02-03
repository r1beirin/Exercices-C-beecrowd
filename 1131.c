#include <stdio.h>

int main(){
    int golInter, golGremio, continuar = 1, comecarNovamente, grenais = 0, vitInter = 0, vitGremio = 0, empate = 0;

    while(continuar == 1){
        scanf("%d%d", &golInter, &golGremio);

        grenais++;
        if(golInter > golGremio) vitInter++;
        else if(golGremio > golInter) vitGremio++;
        else empate++;

        while(1){
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &comecarNovamente);

            if(comecarNovamente == 1) break;
            if(comecarNovamente == 2){
                continuar = 2;
                break;
            }
        }
    }

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitInter);
    printf("Gremio:%d\n", vitGremio);
    printf("Empates:%d\n", empate);

    if(vitInter > vitGremio) printf("Inter venceu mais\n");
    else if (vitGremio > vitInter) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");

    return 0;
}
