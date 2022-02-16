#include <stdio.h>
#define MAX 61

int main(){
	int n, t, i;
	long long int fibo[MAX];
	
	fibo[0] = 0;
	fibo[1] = 1;

	for(i = 2; i <= 60; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d", &t);
		printf("Fib(%d) = %lld\n", t, fibo[t]);
	}
	
	return 0;
}
