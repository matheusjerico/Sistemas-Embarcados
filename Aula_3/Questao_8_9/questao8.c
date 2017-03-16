#include <stdio.h>
#include <stdlib.h>

#include "num_caracs.h"

	int main () {

	char nome [100];
	gets(nome);
	printf("Argumento: %s / Numero de caracteres: %d \n", nome , numCaractere(nome));

	

return 0;
}
