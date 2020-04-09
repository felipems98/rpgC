//Itens Type
typedef struct
{	
	int idI;
	int tipo;
	char nomeI[20];
	int vidaI;
	int danoI;
	int defesaI;
	
} ST_Item;

//Invetory type
typedef struct 
{
	ST_Item item;	
} ST_Inv;
//Player Type
typedef struct 
{
	
	char nomeP[20];
	int levelP;
	int vidaP;
	int danoP;
	int defesaP;
	//ST_Inv inventario[10];
	ST_Item arma;
	ST_Item armadura[1];
//	ST_Habilidades habM;
}ST_Personagem;

typedef struct{
	int idM;
	char nomeM[20];
	int vidaM;
	int danoM;
	int defesaM;
}ST_Inimigo;

///////////////**************************//////////////////////////
/////////////////////////Items////////////////////////////////////

//Armas
ST_Item Espada= {0, 1, "espada", 0, 10, 0};
ST_Item Machado= {2, 1, "machado", 0, 12, 0};
/////////////////////////////////////////////////////////////////

///////////////**************************//////////////////////////
/////////////////////////Inimigos////////////////////////////////////

ST_Inimigo Esqueleto= {0, "Esqueleto", 30, 10, 2};
