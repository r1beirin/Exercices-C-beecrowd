#include <stdio.h>

int main(){
	int l, vel, velMaior = 0, i;

	while(scanf("%d", &l) != EOF){
		
		for(i = 0; i < l; i++){
			scanf("%d", &vel);
			if(vel > velMaior) velMaior = vel;
		}

		if(velMaior < 10) printf("1\n");
		if(velMaior >= 10 && velMaior < 20) printf("2\n");
		if(velMaior >= 20) printf("3\n");
		velMaior = 0;
	}

	return 0;
}
