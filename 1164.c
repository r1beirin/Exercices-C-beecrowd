#include <stdio.h>

int main(){
	int n, num, i, j, somaNum = 0;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d", &num);
		for(j = 1; j < num; j++){
			if(num % j == 0){
				somaNum += j;
			}
		}
		if(somaNum == num) printf("%d eh perfeito\n", num);
		else printf("%d nao eh perfeito\n", num);
		somaNum = 0;
	}

	return 0;	
}
