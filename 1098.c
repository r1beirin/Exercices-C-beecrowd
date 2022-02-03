#include <stdio.h>

/*
i = 0, j = 1 - j = 2 - j = 3
i = 0.2, j = 1.2 - j = 2.2 - j = 3.2
i = 0.4, j = 1.4 - j = 2.4 - j = 3.4
...
i = 0.8 j = 1.8 - j = 2.8 - j = 3.8
i = 1, j = 2 - j = 3 - j = 4
i = 1.2, j = 2.2 3.2 4.2
...
i = 1.8, j = 2.8 3.8 4.8
i = 2, j = 3 - j = 4 - j = 5

Logo I = I e J = J + I
*/

int main(){
    double i, j;

    for(i = 0; i <= 2; i += 0.2){
        for(j = 1; j <= 3; j++){
            //printf("I=%.1lf J=%.1lf\n", i, i+j);
            if(i == 0.0 || (i > 0.9 && i < 1.1) || i > 1.8){
                printf("I=%.lf J=%.lf\n", i, i+j);
            }
            else{
                printf("I=%.1lf J=%.1lf\n", i, i+j);
            }
        }
    }

    return 0;
}
