#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

int main (int argc, char **argv){
	char conteudo[300];
	le_arq_texto(argv[1],conteudo);
	printf("Conteudo do arquivo: \n%s\n",conteudo);
return 0;
}
