#include <stdio.h>
#include <string.h>
#define MAX 15

int main(){
	int i;
	char a[MAX], b[MAX], c[MAX];

	scanf("%s%s%s", &a, &b, &c);

	if(strcmp(a,"vertebrado") == 0){
		if(strcmp(b,"ave") == 0){
			if(strcmp(c,"carnivoro") == 0) printf("aguia\n");
			if(strcmp(c,"onivoro") == 0) printf("pomba\n");
		}
		if(strcmp(b,"mamifero") == 0){
			if(strcmp(c,"onivoro") == 0) printf("homem\n");
			if(strcmp(c,"herbivoro") == 0) printf("vaca\n");
		}
	}
	if(strcmp(a,"invertebrado") == 0){
		if(strcmp(b,"inseto") == 0){
			if(strcmp(c,"hematofago") == 0) printf("pulga\n");
			if(strcmp(c,"herbivoro") == 0) printf("lagarta\n");
		}
		if(strcmp(b,"anelideo") == 0){
			if(strcmp(c,"hematofago") == 0) printf("sanguessuga\n");
			if(strcmp(c,"onivoro") == 0) printf("minhoca\n");
		}
	}
	return 0;
}
