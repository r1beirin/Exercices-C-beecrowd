#include <stdio.h>
 
int main() {
    double volume, raio, pi = 3.14159;
    
    scanf("%lf", &raio);
    volume = 4/3.00 * pi * (raio * raio * raio);
    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}
