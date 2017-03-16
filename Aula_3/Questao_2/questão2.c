#include <stdio.h>
#include <stdlib.h>

int main () {
	char  nome [20];

	printf("Digite seu nome: ");

	gets(nome); //pegar a linha inteira, no caso do scanf se der "espaço" ja conta como finalizado.
	printf("Ola %s \n", nome);


	return 0;
}
