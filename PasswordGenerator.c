#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv) {
	int taille;
	srand((unsigned int)time(NULL));	//Initialisation de rand(), unsigned int pour éviter valeurs négatifs
	const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789'(_)=/*-+#{[|@]}$%,?;.:!<>";	//Alphabet où rand pourra récuperer aléatoirement un caractère

	if(argc == 1) {
		printf("Combien de caractère ? :");
		scanf("%d\n", &taille);
	} else {
		taille = atoi(argv[1]);
	}

	//Boucle pour afficher un caractere aleatoire a la suite
	for(int i = 0; i < taille; i++) {
		printf("%c", alphabet[rand() % (sizeof(alphabet) - 1)]);	//Selectionne aléatoirement un carractère dans la liste alphabet
	}
	puts("");

	return 0;
}