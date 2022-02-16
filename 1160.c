#include <stdio.h>
#include <math.h>

int main(){
    int n, i, pa, pb, anos;
	double g1, g2;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
		anos = 0;

		while(pa <= pb){
			pa *= 1 + (g1/100.0); // ex: pa = 100 * (1 + 0.025)
			pb *= 1 + (g2/100.0);
			anos++;
			if(anos > 100){
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		if(anos <= 100) printf("%d anos.\n", anos);
	}
	
	//printf("%.0lf", floor (100 + (100 * (2.5 / 100))));

	return 0;	
}
