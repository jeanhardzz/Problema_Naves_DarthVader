#ifndef COMBATE
#define COMBATE

#include "tads/lista/lista-encadeada.h"

class Combate{
  private:
    ListaEncadeada lista;
  public:
    Combate();
    void EnviaNave(int nave);
    int RecuarNave(int nave);
};

#endif