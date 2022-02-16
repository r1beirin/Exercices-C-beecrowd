#include <stdio.h>


int main(){
    int opcao, alcool = 0, gasolina = 0, diesel = 0;

    while(1){
        scanf("%d", &opcao);

        if(opcao == 1) alcool++;
        if(opcao == 2) gasolina++;
        if(opcao == 3) diesel++;
        if(opcao == 4) break;
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    return 0;
}
