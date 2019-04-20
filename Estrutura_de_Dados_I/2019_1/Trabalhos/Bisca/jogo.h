#ifndef JOGO_H
#define JOGO_H

#include "baralho.h"

typedef struct jogador Jogador;
typedef struct celulajogador CelulaJogador;
typedef struct players Players;

void Menu ();
CelulaJogador* InicializaJogador ();
CelulaJogador* InicializaJogadorIA ();
int InicializaJogo (int tipoJogo, Players *jogadores);
CelulaBaralho* JogadaReal (Jogador* jogg);
CelulaBaralho* JogadaIA (Jogador* jogg);
void LimparPlayers (Players *jogadores);


void IniciaJogo (int tipoJogo);
void DistribuiCartas (Baralho *brl, Players *jogadores);

#endif
