#include <stdio.h>

int main(){
    int numUm, numDois, numTres, pos1, pos2, pos3;

    scanf("%d%d%d", &numUm, &numDois, &numTres);

    if(numUm > numDois && numUm > numTres){
        pos1 = numUm;

        if(numDois > numTres){
            pos2 = numDois;
            pos3 = numTres;
        }
        else{
            pos2 = numTres;
            pos3 = numDois;
        }
    }
    else if(numDois > numUm && numDois > numTres){
        pos1 = numDois;

        if(numUm > numTres){
            pos2 = numUm;
            pos3 = numTres;
        }
        else{
            pos2 = numTres;
            pos3 = numUm;
        }
    }
    else if(numTres > numUm && numTres > numDois){
        pos1 = numTres;

        if(numUm > numDois){
            pos2 = numUm;
            pos3 = numDois;
        }
        else{
            pos2 = numDois;
            pos3 = numUm;
        }
    }

    printf("%d\n%d\n%d\n", pos3, pos2, pos1);
    printf("\n%d\n%d\n%d\n", numUm, numDois, numTres);

    return 0;
}
