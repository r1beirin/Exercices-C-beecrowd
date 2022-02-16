#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c, areaTotal, areaInicial, lado;

	/*
	8 metros e o tamanho real da casa seria de 64 metros quadrados.
	Se a legislação permitisse a utilizar 50% do terreno, o mesmo teria que ter 160 metros para que 50% 
	dele fosse 80 metros quadrados, o suficiente para uma casa de 8 x 8 metros (64 metros quadrados)

	80m - 50%
	160m - 100%

	A = L^2. ~> para tirar o quadrado é só aplicar raiz quadrada de ambos os lados
	lado = sqrt 160 =~ 12

	No primeiro caso de teste, como o percentual para construir é de apenas 20%, o terreno teria que 
	ter 20 metros de lado para que 1/5 (20%) deste terreno tivesse o tamanho de 80 metros quadrados.
	Qual seria a area total do terreno?

	8 10 20 - Output = 20 (lado)

	20% - 80 metros
	100% - 8*5= 400 metros
	
	Como a saida deu lado 20, temos que a formula da area do quadrado é
	A = L^2
	Logo, 400 = 20^2

	sqrt A = sqrt L^2 ~> sqrt A = L

	*/
	scanf("%d", &a);
	while(a != 0){
		scanf("%d%d", &b, &c);

		areaInicial = a * b;
		areaTotal = (areaInicial * (100.0/c));
		lado = sqrt(areaTotal);
		printf("%d\n", lado);
		scanf("%d", &a);
	}
	return 0;
}
