#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../incs/MainResources.h"
#include "Combate.c"

int main(){
	ST_Personagem p = {"Cleber", 1, 25,5,4, Espada, NULL };
	printf("temos que começar por algum canto!\n");
	printf("%s\n", Espada.nomeI);
	printf("%i\n", Esqueleto.vidaM );
	ataque(0, &p, &Esqueleto);
	printf("%i\n", Esqueleto.vidaM );
	return 0;
}
