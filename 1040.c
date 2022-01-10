#include <stdio.h>

int main(){
    double notaUm, notaDois, notaTres, notaQuatro, media, notaExame;

    scanf("%lf%lf%lf%lf", &notaUm, &notaDois, &notaTres, &notaQuatro);
    media = ((notaUm * 2) + (notaDois * 3) + (notaTres * 4) + (notaQuatro * 1)) / 10.0;
    // 9 4 8.5 9

    if(media >= 7){
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }
    else if(media >= 5 && media <= 6.9){
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");

        scanf("%lf", &notaExame);
        printf("Nota do exame: %.1lf\n", notaExame);

        media = (media + notaExame) / 2;

        if(media <= 4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", media);
        }
        else{
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", media);
        }
    }
    else{
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }

    return 0;
}
