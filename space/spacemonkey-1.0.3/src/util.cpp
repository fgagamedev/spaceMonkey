
#include <SDL/SDL.h>
#include"util.h"
#include"nomesArquivos.h"
#include"constantes.h"
#include"fileNotFoundException.h"

//para a execução pelos milissegundos pedidos
void Util::delay(int mili)
{
	SDL_Delay(mili);
}

TTF_Font* Util::getFonte(int size)throw(FileNotFoundException)
{
	TTF_Font *font = TTF_OpenFont( (PATH+FONTE).c_str(), size);
	if(!font)
		throw FileNotFoundException("Falha ao carregar a fonte "+ string(FONTE));
	return font;
}
