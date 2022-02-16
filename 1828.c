#include <stdio.h>
#include <string.h>

/*
Sheldon ganha: 1
Sheldon perde: -1
Empate: 0
*/
void regras(char s1[14], char s2[14], int i){
	int aux;
	if(strcmp(s1, s2) == 0) aux = 0;
	else if(strcmp(s1, "pedra") == 0 && strcmp(s2, "tesoura") == 0) aux = 1;
	else if(strcmp(s1, "pedra") == 0 && strcmp(s2, "lagarto") == 0) aux = 1;
	else if(strcmp(s1, "Spock") == 0 && strcmp(s2, "pedra") == 0) aux = 1;
	else if(strcmp(s1, "Spock") == 0 && strcmp(s2, "tesoura") == 0) aux = 1; 
	else if(strcmp(s1, "papel") == 0 && strcmp(s2, "Spock") == 0) aux = 1; 
	else if(strcmp(s1, "papel") == 0 && strcmp(s2, "pedra") == 0) aux = 1;
	else if(strcmp(s1, "lagarto") == 0 && strcmp(s2, "papel") == 0) aux = 1;
	else if(strcmp(s1, "lagarto") == 0 && strcmp(s2, "Spock") == 0) aux = 1;
	else if(strcmp(s1, "tesoura") == 0 && strcmp(s2, "lagarto") == 0) aux = 1;
	else if(strcmp(s1, "tesoura") == 0 && strcmp(s2, "papel") == 0) aux = 1;
	else aux = -1;

	if(aux == 0) printf("Caso #%d: De novo!\n", i);
	if(aux == 1) printf("Caso #%d: Bazinga!\n", i);
	if(aux == -1) printf("Caso #%d: Raj trapaceou!\n", i);
}

int main(){
	int t, i;
	char s1[14], s2[14];

	scanf("%d", &t);

	for(i = 1; i <= t; i++){
		scanf("%s%s", s1, s2);
		regras(s1, s2, i);
	}
	
	return 0;
}
