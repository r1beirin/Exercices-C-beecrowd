#include <stdio.h>
#define MAX 38

int main(){
	int n, i;
	char citacao[MAX] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		printf("%c", citacao[i]);
	}
	printf("\n");
	
	return 0;
}
