#include <stdlib.h>
#include <stdio.h>
	
int main () {
	FILE *pf;
	char nome[50];
	char copy[50];
	char idadeS [40];
	int idade;
	printf("Nome: ");
	gets(nome);


	if ((pf = fopen (nome,"w")) == NULL) {
		printf("\n Nao foi possivel abrir o arquivo\n");
		exit(1);
}

	printf("\nIdade: ");
	scanf("%d", &idade);
	sprintf(idadeS, "%d", idade);
	fprintf(pf,"Nome: %s \n",nome);
	fprintf(pf,"Idade: %s \n",idadeS);
	fclose(pf);

return 0;
}
