#include <stdio.h>
#define MAX 10000

int main(){
	double val, N[MAX];
	int i;

	for(i = 0; i < 100; i++){
		scanf("%lf", &val);
		N[i] = val;
		//if(val <= 10) printf("A[%d] = %.1lf\n", i, N[i]);
	}

	for(i = 0; i < 100; i++){
		if(N[i] <= 10) printf("A[%d] = %.1lf\n", i, N[i]);
	}
	
	return 0;
}
