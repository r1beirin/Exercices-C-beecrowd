#include <stdio.h>

int main(){
    int i = 0, I = 1, J = 60;

    for(i; i < 13; i++){
        printf("I=%d J=%d\n", I, J);
        I += 3;
        J -= 5;
    }

    return 0;
}
