#include <stdio.h>

int main(){
    int i = 1, j = 7;

    while (j > 4){
        printf("I=%d J=%d\n", i, j);

        if(j == 5){
            // utilizei o 8 pois quando J vale 8 ele ira percorrer 3 vezes o while até chegar em J valendo 5 novamente.
            j = 8;
            i += 2;

            if(i == 11) break;
        }
        // se J = 8, j valerá 7 e print 7 -> valerá 6 e print 6 -> valerá 5 e print 5 -> entra no if novamente para add +2 no i.
        j--;
    }

    return 0;
}
