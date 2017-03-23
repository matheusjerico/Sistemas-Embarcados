#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

	int main (){
	char conteudo[300];
	le_arq_texto("teste_tamanho_arquivo.txt", conteudo);

		printf("Tamanho do arquivo é: %d\n",tam_arq_texto ("teste_tamanho_arquivo.txt"));
		printf("%s", conteudo);
	
return 0;
}
