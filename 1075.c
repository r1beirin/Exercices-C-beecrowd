#include <stdio.h>

int main(){
    int n, i = 1;
    
    scanf("%d", &n);

    for(i; i < 10000; i++){
        if(i % n == 2){
            printf("%d\n", i);
        }
    }

    return 0;
}
