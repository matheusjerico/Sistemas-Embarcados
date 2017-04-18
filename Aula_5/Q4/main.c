#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>	// Para a funcao open()
#include "bib_arqs.h"
	
int main() {
	char nome_arquivo[50];
	printf("digite o nome do arquivo: \n");
	gets(nome_arquivo);
	printf("o tamanho do arquivo é %d\n",tam_arq_texto(nome_arquivo));
	return 0;
}
