#include <stdio.h>

int main(){
	int t, i;

	scanf("%d", &t);

	for(i = 0; i < t; i++){
		if(i == t - 1){
			printf("Ho!\n");
			continue;
		}
		printf("Ho ");
	}

	return 0;
}
