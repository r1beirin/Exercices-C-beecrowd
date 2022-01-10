#include <stdio.h>


int main(){
    int n, i, val1, val2, val3;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        if(i == 0){
            printf("%d %d %d PUM\n", i+1, i+2, i+3);
            val1 = 1;
            val2 = 2;
            val3 = 3;
        }
        else{
            val1 += 4;
            val2 += 4;
            val3 += 4;
            printf("%d %d %d PUM\n", val1, val2, val3);
        }
    }
    
    return 0;
}
