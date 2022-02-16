#include <stdio.h>
#define MAX 20

int main(){
	int val, i, N[MAX];

	// i | (n - 1) - i = correspondente
	for(i = 0; i < 20; i++){
		scanf("%d", &val);
		N[i] = val;
	}

	for(i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, N[19 - i]);
	}

	return 0;
}
