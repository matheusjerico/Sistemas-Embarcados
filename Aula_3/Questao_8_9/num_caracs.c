#include <string.h>
#include "num_caracs.h"

int numCaractere(char *nome)
{
	int i;
	int n=0;

	for (i=0; nome[i] != '\0' ; i++) {
	n++;

}
	return n;
}
