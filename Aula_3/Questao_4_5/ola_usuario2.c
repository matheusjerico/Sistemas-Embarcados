#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char ** argv) {
	int i= argc;
	
	printf("Ola %s\n", argv[i]);
	printf("Numero de entradas: %d\n", argc);

	return 0;
}
