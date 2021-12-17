#include <stdio.h>
#include <stdlib.h>


int main() {
    int numA, numB, numC, maiorAB, maiorXC;

    scanf("%d%d%d", &numA, &numB, &numC); 
    // Modulo de um numero em C: (a - b) * -1
    // ex: (1 + 2 + ((1 - 2) * -1)) / 2
    maiorAB = (numA + numB + abs(numA - numB))/2;
    maiorXC = (maiorAB + numC + abs(maiorAB - numC))/2;
    printf("%d eh o maior\n", maiorXC);

    return 0;
}
