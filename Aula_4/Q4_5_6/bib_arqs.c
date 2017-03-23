#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

int tam_arq_texto(char *nome_arquivo){
	
	FILE *fp;
	fp = fopen (nome_arquivo, "r");
	if(!fp){
	printf("IMPOSSIVEL ABRIR O ARQUIVO");
	exit (0);
}
	char c;
	int count=0;
	
	while((c=getc(fp)) != EOF){
	count++;
}
	count--;
	fclose(fp);
	return count;
	}

void le_arq_texto(char *nome_arquivo, char *conteudo){
		
	FILE *fp;
	fp = fopen (nome_arquivo, "r");
	if(!fp)
{
	printf("IMPOSSIVEL ABRIR O ARQUIVO");
	exit (0);
}
	int contador=0;
	char c;

	while((c=getc(fp)) != EOF) {
		conteudo[contador] = c ; contador++;
}

	fclose(fp);
}


