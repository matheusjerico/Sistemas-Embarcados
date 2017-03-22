#include <stdlib.h>
#include <stdio.h>
	
int main () {
	FILE *fp;
	fp = fopen("ola_mundo.txt","w");

	if (!fp)
	printf("Erro na abertura do arquivo");

	else{
	printf("Deu bom \n");
	fputs("Ola mundo", fp);
	}
	fclose(pf);

return 0;
}


