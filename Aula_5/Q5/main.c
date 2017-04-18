#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>	// Para a funcao open()
#include "bib_arqs.h"

	int main(){
	
	char conteudo[50];
	le_arq_texto("teste.txt", conteudo);
return 0;
}
