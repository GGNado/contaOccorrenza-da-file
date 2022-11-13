#include <stdio.h>
#include <stdlib.h>

int contaOccorrenza(char*);

int main(){

	char* nomeFile = "lettere.txt";

	int x = contaOccorrenza(nomeFile);

	if (x == -1) {
		printf("Errore nell'apertura del file\n");
	} else {
		printf("Ci sono %d lettere 'a'\n", x);
	}

	return 0;
}

int contaOccorrenza(char* nomeFile){

	int x = 0;
	char lettera;

	FILE* file;

	file = fopen(nomeFile, "r");

	if (file == NULL) return -1;

	do {

		lettera = fgetc(file);
		if (lettera == 'a' || lettera == 'A') {
				x++;
			}

	} while(lettera!=EOF);

	fclose(file);
	

	return x;
}