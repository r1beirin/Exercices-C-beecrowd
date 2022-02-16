#include <stdio.h>

int main(){
	int n, i = 0, N[10];

	scanf("%d", &n);

	while(i < 10){
		N[i] = n;
		n *= 2;

		i++;
	}

	for(i = 0; i < 10; i++){
		printf("N[%d] = %d\n", i, N[i]);
	}

	return 0;	
}
