#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>	// Para a funcao open()
#include "bib_arqs.h"
	
int main( int argc , char *argv[]){
	char conteudo[50];
	le_arq_texto(argv[1],conteudo);
return 0;
}
