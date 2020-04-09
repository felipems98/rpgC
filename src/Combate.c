void ataque(int turno, ST_Personagem *p, ST_Inimigo *i){
	printf("%i\n", p->danoP);
	printf("%i\n", p->arma.danoI);
	int danoTotal = p->danoP + p->arma.danoI;
	printf("%i\n", danoTotal);
	i->vidaM = i->vidaM - (danoTotal - i->defesaM)  ;
	
}
