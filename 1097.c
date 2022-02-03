#include <stdio.h>

int main(){
    int I = 1, J = 7, i = 0;

    while(I <= 9){
        for(i = 0; i < 3; i++){
            printf("I=%d J=%d\n", I, J--);
        }
        
        J += 5;
        I += 2;
    }

    return 0;
}
