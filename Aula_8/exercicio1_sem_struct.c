#include <stdlib.h>
#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()
#include <string.h>
#include <pthread.h>


	void* funcao (void* numero){
	
	int *p = (int*) numero;
	int i=1;

		while(i <= *p){

			printf("%d\n", i);
			sleep(1);
			
			i++;		
}
	return NULL;
}	

int main (){

	pthread_t thread1_id;
	//struct contador_numeros argumentos;
	int contar_quanto;

	printf("Deseja contar ate quanto? ");
	scanf("%d", &contar_quanto);
	//	argumentos.count = contar_quanto;
	
 	pthread_create (&thread1_id,NULL, &funcao, &contar_quanto);

	pthread_join(thread1_id, NULL);

	return 0;
}
