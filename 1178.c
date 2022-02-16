#include <stdio.h>
#define MAX 100

int main(){
	double x, div = 0, n[MAX];
	int i;
	
	scanf("%lf", &x);

	for(i = 0; i < MAX; i++){
		if(i == 0){
			div = x;
			n[i] = div;
		}
		else{
			div /= 2;
			n[i] = div;
		}
		printf("N[%d] = %.4lf\n", i, n[i]);
	}

	return 0;
}
