#include <stdio.h>
#define MAX 45

int main() {
	int n, fibo[MAX], i;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		if(i == 0) fibo[i] = 0;
		else if(i == 1) fibo[i] = 1;
		else fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	for(i = 0; i < n; i++){
		if(i == n - 1){
			printf("%d\n", fibo[i]);
			break;
		}
		printf("%d ", fibo[i]);
	}


	return 0;	
}		
