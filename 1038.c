#include <stdio.h>

int main(){
    int codigo, quantidade;
    double preco;

    scanf("%d%d", &codigo, &quantidade);
    
    switch (codigo){
        case 1:
            preco = 4 * quantidade;
            printf("Total: R$ %.2lf\n", preco);
            break;
        case 2:
            preco = 4.5 * quantidade;
            printf("Total: R$ %.2lf\n", preco);   
            break;
        case 3:
            preco = 5 * quantidade;
            printf("Total: R$ %.2lf\n", preco);
            break;
        case 4:
            preco = 2 * quantidade;
            printf("Total: R$ %.2lf\n", preco);
            break;
        case 5:
            preco = 1.5 * quantidade;
            printf("Total: R$ %.2lf\n", preco);
            break;
        default:
            break;
    }

    return 0;
}
