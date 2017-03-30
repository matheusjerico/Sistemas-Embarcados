#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()
#include <string.h>

int main(){
	int fp;
	int i;	
	char idade[8];
	char nome[50];
	char nomec[50];	
	printf("Digite o seu nome: ");
	gets(nome);
	printf("\nDigite a sua idade: ");
	scanf("%s", idade);
	
	strcpy(nomec,nome);
	strcat(nomec,".txt");
	
	char n[]= "Nome: ";
	char ii[]= "Idade: ";

	fp = open (nomec, O_RDWR | O_CREAT, S_IRWXU);
	if(fp==-1)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}
	write(fp,&n,strlen(n));
	write(fp,&nome,strlen(nome));
	write(fp,"\n",1);
	write(fp,&ii,strlen(ii));
	write(fp,&idade,strlen(idade));
	write(fp,"\n",1);
	close(fp);
	
	
return 0;
}
