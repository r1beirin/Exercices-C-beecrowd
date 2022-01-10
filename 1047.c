#include <stdio.h>

int main(){
    int horaInicial, minutoInicial, horaFinal, minutoFinal, duracaoHora, duracaoMinuto;

    scanf("%d%d%d%d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    duracaoHora = horaFinal - horaInicial;
    duracaoMinuto = minutoFinal - minutoInicial;

    // 14h, fim - 12h, inicio = 2 | passou 2h hora > 0
    // 12h, fim - 14h, inicio = - 2 |passou 1d 2h hora < 0 
    if (duracaoHora < 0){
        duracaoHora = duracaoHora + 24;
    }
    // 14 10min, fim - 13 40min, inicio = - 30 min | passou 30min | min < 0 || somar -30 com 60 para achar 30min
    // 15 45min, fim - 14 50min, inicio = - 5 min | passou 55min | min < 0 || somar -5 com 60 para achar 55min
    // 15 32min, fim - 14 43min, inicio = - 11 | passou 49min | min < 0 || somar -11 com 60 para achar 49min
    if (duracaoMinuto < 0){
        duracaoMinuto = duracaoMinuto + 60;
        duracaoHora = duracaoHora - 1;
        if(duracaoHora < 0){
            duracaoHora = duracaoHora + 24;
        }
    }
    if(duracaoHora == 0 && duracaoMinuto == 0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMinuto);
    }

    return 0;
}
