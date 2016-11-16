
#ifndef COULEURS
#include <stdio.h>
#define clrscr() printf("\033[H\033[2J")
#define couleur(param) printf("\033[%im",param)
#endif




int main(){
	printf("Choisir une couleur : 30=noir 31=rouge 32=vert 37=blanc : ");
	int couleur;
	scanf("%i",&couleur);
	clrscr();
	couleur(couleur);
}