#include <stdio.h>

//o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.
int main(){
    int i = 0, n;
    double n1, n2, n3, media;
    
    scanf("%d", &n);

    for(i; i < n; i++){
        scanf("%lf%lf%lf", &n1, &n2, &n3);
        media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
        printf("%.1lf\n", media);
    }

    return 0;
}
