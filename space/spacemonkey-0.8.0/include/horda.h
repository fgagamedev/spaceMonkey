#ifndef Hordas_h
#define Hordas_h

#include "constantes.h"
#include "inimigo.h"
#include "initException.h"
#include "fileNotFoundException.h"
#include <vector>

using namespace std;

class Horda
{
private:
	//vetor de inimigos que compõem a horda
	vector<Inimigo*> *vetorInimigos;
	//tamanho do vetor
	int numInimigos;
	//numero de inimigos de cada tipo
	int numChipanzes1, numChipanzes2, numGorilas1, numGorilas2, numOragotangos;
	//quantos inimigos restam
	int inimigosSobrando;
public:
	//guarda o tamanho da horda e a quantidade de cada tipo de inimigo
	Horda(int numInimigos, int numFase);
	//desaloca a memoria da hordae seus inimigos
	~Horda();
	//inicializa os inimigos
	void init() throw (InitException, FileNotFoundException);
	//retorna um inimigo especifico
	Inimigo* getInimigo(int pos);
};

#endif

