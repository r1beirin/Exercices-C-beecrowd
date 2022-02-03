#include <stdio.h>

int main(){
    int n, i = 0;
    double x, y, resultado;

    scanf("%d", &n);
    
    for(i; i < n; i++){
        scanf("%lf%lf", &x, &y);

        resultado = x / y;
        
        if(x != 0 && y == 0) printf("divisao impossivel\n");
        else printf("%.1lf\n", resultado);
    }

    return 0;
}
