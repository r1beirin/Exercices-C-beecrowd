#include <stdio.h>
#define MAX 100000

int main() {
	int x, y, maior, menor, i, seq[MAX];

	scanf("%d %d", &x, &y);

	if(x > y){
		maior = x;
		menor = y;
	}
	else{
		maior = y;
		menor = x;
	}

	for(i = 1; i <= maior; i++){
		seq[i] = i;
		
		printf("%d", seq[i]);

		if(i % menor == 0) printf("\n");
		else printf(" ");
	}

	return 0;	
}		
