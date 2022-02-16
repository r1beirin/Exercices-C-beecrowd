#include <stdio.h>

int main(){
	int n, i, X[10];

	for(i = 0; i < 10; i++){
		scanf("%d", &n);

		if(n <= 0) n = 1;
		X[i] = n;
	}

	for(i = 0; i < 10; i++){
		printf("X[%d] = %d\n", i, X[i]);
	}

	return 0;	
}
