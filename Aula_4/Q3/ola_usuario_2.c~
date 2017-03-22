#include <stdlib.h>
#include <stdio.h>
	
int main ( int argc, char ** argv) {
	FILE *pf;
	
	if ((pf = fopen ("ola_usuario_2.txt","w")) == NULL)
{
		printf("\n Nao foi possivel abrir o arquivo\n");
		exit(1);
}
	fprintf(pf,"Nome: %s\n", argv[argc-2]);
	fprintf(pf,"Idade: %s\n", argv[argc-1]);
	fclose(pf);
}
