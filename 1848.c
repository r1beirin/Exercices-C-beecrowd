#include <stdio.h>
#include <string.h>

/*
Ordem dos binarios:

---	--*	-*-	-**	*-- *-*	**-	***
000	001	010	011	100	101	110	111
0	1	2	3	4	5	6	7	

Será feita a soma (dos binários) com base na entrada na string.
A soma será feita até ter uma entrada de string "cow cow"
Após o cow cow: printar a soma, limpar a soma e fazer cont++
Quando cont = 3, o programa para.
*/

int main(){
	int soma = 0, cont = 0;
	char input[50];

	while (1){
		if(cont == 3) break;

		gets(input);
		
		if(strcmp(input, "caw caw") == 0){
			printf("%d\n", soma);
			soma = 0;
			cont++;
		}

		if(strcmp(input, "---") == 0) soma += 0;
		if(strcmp(input, "--*") == 0) soma += 1;
		if(strcmp(input, "-*-") == 0) soma += 2;
		if(strcmp(input, "-**") == 0) soma += 3;
		if(strcmp(input, "*--") == 0) soma += 4;
		if(strcmp(input, "*-*") == 0) soma += 5;
		if(strcmp(input, "**-") == 0) soma += 6;
		if(strcmp(input, "***") == 0) soma += 7;
	}
	
	
	return 0;
}
