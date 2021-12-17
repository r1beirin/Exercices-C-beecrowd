#include <stdio.h>
 
int main() {
    int codigoPrimeira, numeroPrimeira, codigoSegunda, numeroSegunda;
    float valorPrimeira, valorSegunda, total;
    
    scanf("%d%d%f", &codigoPrimeira, &numeroPrimeira, &valorPrimeira);
    scanf("%d%d%f", &codigoSegunda, &numeroSegunda, &valorSegunda);
    total = (numeroPrimeira * valorPrimeira) + (numeroSegunda * valorSegunda);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
    return 0;
}
