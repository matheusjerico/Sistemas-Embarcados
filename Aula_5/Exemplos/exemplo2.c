#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
	int fp;
	
	fp = open("exercicio2.txt", O_RDWR | O_CREAT); // O_CREAT cria o arquivo se não estiver criado.
	if(fp==-1)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}
	close(fp);

	return 0;
}
