#include <stdio.h>

int main(){
    int diaInicio, horaInicio, minutoInicio, segundoInicio, diaFinal, horaFinal, minutoFinal, segundoFinal, calculoDia, calculoHora, calculoMinuto, calculoSegundo;

    scanf("Dia %d\n", &diaInicio);
    scanf("%d : %d : %d\n", &horaInicio, &minutoInicio, &segundoInicio);
    scanf("Dia %d\n", &diaFinal);
    scanf("%d : %d : %d", &horaFinal, &minutoFinal, &segundoFinal);

    // O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês.
    // O evento tem duração mínima de 1 minuto.
    calculoDia = diaFinal - diaInicio;
    calculoHora = horaFinal - horaInicio;
    calculoMinuto = minutoFinal - minutoInicio;
    calculoSegundo = segundoFinal - segundoInicio;

    if(calculoHora < 0){
        calculoHora = calculoHora + 24;
        calculoDia = calculoDia - 1;
    }
    if(calculoMinuto < 0){
        calculoMinuto = calculoMinuto + 60;
        calculoHora = calculoHora - 1;
        if(calculoHora < 0){
            calculoHora = calculoHora + 24;
            calculoDia = calculoDia - 1;
        }
    }
    if(calculoSegundo < 0){
        calculoSegundo = calculoSegundo + 60;
        calculoMinuto = calculoMinuto - 1;
    }

    printf("%d dia(s)\n", calculoDia);
    printf("%d hora(s)\n", calculoHora);
    printf("%d minuto(s)\n", calculoMinuto);
    printf("%d segundo(s)\n", calculoSegundo);
    
    return 0;
}
