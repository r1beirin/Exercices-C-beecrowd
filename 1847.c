#include <stdio.h>

int main(){
	int d1, d2, d3, aux;
	scanf("%d%d%d", &d1, &d2, &d3);

	/*
	Feliz: aux = 1;
	Não feliz: aux = -1;
	*/

	if(d1 > d2 && d2 <= d3) aux = 1;
	else if(d1 < d2 && d2 >= d3) aux = -1;
	/*
	subiu do 2º para o 3º menos do que subira do 1º para o 2º
	Ou seja d3 - d2 < d2 - d1? **** Olhar na agenda os exemplos
	4 16 20	|	4 < 12 
	*/
	else if(d1 < d2 && (d3 - d2) < (d2 - d1)) aux = -1;
	/*
	mas subiu do 2º para o 3º no mínimo o tanto que subira do 1º para o 2º
	d3 - d2 >= d2 - d1?
	4 10 20	|	10 >= 6
	*/
	else if(d1 < d2 && (d3-d2) >= (d2-d1)) aux = 1;
	/*
	desceu do 2º para o 3º menos do que descera do 1º para o 2º
	d2 - d3 < d1 - d2
	ex 20 10 6	| 4 < 10
	*/
	else if(d1 > d2 && d2 > d3 && (d2 - d3) < (d1 - d2)) aux = 1;
	/*
	mas desceu do 2º para o 3º no mínimo o tanto que descera do 1º para o 2º
	d2 - d3 >= d1 - d2
	ex 20 16 4	| 12 >= 4
	*/
	else if(d1 > d2 && d2 > d3 && (d2 - d3) >= (d1 - d2)) aux = -1;	
	else if(d1 == d2 && d2 < d3) aux = 1;
	else aux = -1;

	if(aux == 1) printf(":)\n");
	if(aux == -1) printf(":(\n");

	return 0;
}
