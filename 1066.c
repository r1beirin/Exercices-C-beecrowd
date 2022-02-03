#include <stdio.h>

int main(){
    int val, par = 0, impar = 0, pos = 0, neg = 0, i;

    for(i = 0; i < 5; i++){
        scanf("%d", &val);

        if(val > 0){
            pos++;
            if(val % 2 == 0){
                par++;
            }
            else{
                impar++;
            }
        }
        else if(val < 0){
            neg++;
            if(val % 2 == 0){
                par++;
            }
            else{
                impar++;
            }
        }
        else{
            par++;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
