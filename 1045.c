#include <stdio.h>
#include <math.h>

int main(){
    double primeiroValor, segundoValor, terceiroValor, valorA, valorB, valorC;
    
    scanf("%lf%lf%lf", &primeiroValor, &segundoValor, &terceiroValor);

    if(primeiroValor > segundoValor && primeiroValor > terceiroValor){
        valorA = primeiroValor;    
        if(segundoValor > terceiroValor){
            valorB = segundoValor;
            valorC = terceiroValor;
        }
        else{
            valorB = terceiroValor;
            valorC = segundoValor;
        }
    }
    else if(segundoValor > primeiroValor && segundoValor > terceiroValor){
        valorA = segundoValor;
        if(primeiroValor > terceiroValor){
            valorB = primeiroValor;
            valorC = terceiroValor;
        }
        else{
            valorB = terceiroValor;
            valorC = primeiroValor;
        }
    }
    else if(terceiroValor > primeiroValor && terceiroValor > segundoValor){
        valorA = terceiroValor;
        if(primeiroValor > segundoValor){
            valorB = primeiroValor;
            valorC = segundoValor;
        }
        else{
            valorB = segundoValor;
            valorC = primeiroValor;
        }
    }
    else if(primeiroValor == segundoValor){
        valorA = primeiroValor;
        valorB = segundoValor;
        valorC = terceiroValor;
    }
    else if(primeiroValor == terceiroValor){
        valorA = primeiroValor;
        valorB = terceiroValor;
        valorC = segundoValor;
    }
    else if(segundoValor == terceiroValor){
        valorA = segundoValor;
        valorB = terceiroValor;
        valorC = primeiroValor;
    }

    if(valorA >= valorB + valorC){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(valorA * valorA == (valorB * valorB) + (valorC * valorC)){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(pow(valorA, 2) > pow(valorB, 2) + pow(valorC, 2)){
        printf("TRIANGULO OBTUSANGULO\n");
        if(valorA == valorB && valorA == valorC && valorB == valorC){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(valorA == valorB){
            printf("TRIANGULO ISOSCELES\n");
        }
        else if(valorA == valorC){
            printf("TRIANGULO ISOSCELES\n");
        }
        else if(valorB == valorC){   
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(pow(valorA, 2) < pow(valorB, 2) + pow(valorC, 2)){
        printf("TRIANGULO ACUTANGULO\n");
        if(valorA == valorB && valorA == valorC && valorB == valorC){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(valorA == valorB){
            printf("TRIANGULO ISOSCELES\n");
        }
        else if(valorA == valorC){
            printf("TRIANGULO ISOSCELES\n");
        }
        else if(valorB == valorC){   
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}
