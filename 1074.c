#include <stdio.h>

/*
par = EVEN - impar = ODD
positivo = POSITIVE - negativo: NEGATIVE
0 = NULL
*/
int main(){
    int n, x, i = 0;

    scanf("%d", &n);

    for(i; i < n; i++){
        scanf("%d", &x);

        if(x == 0) printf("NULL\n");   
        else{
            //par e positivo
            if(x % 2 == 0 && x > 0) printf("EVEN POSITIVE\n");
    
            //par e negativo
            if(x % 2 == 0 && x < 0) printf("EVEN NEGATIVE\n");

            //impar e positivo
            if(x % 2 != 0 && x > 0) printf("ODD POSITIVE\n");

            //impar e negativo
            if(x % 2 != 0 && x < 0) printf("ODD NEGATIVE\n");
        }
    }

    return 0;  
}
