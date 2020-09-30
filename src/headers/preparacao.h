#ifndef PREPARACAO
#define PREPARACAO

#include<string>

#include "tads/pilha/pilha-arranjo.h"


class Preparacao{
  private:
    int n; //tamanho da frota
    PilhaArranjo pilha;

  public:
    Preparacao();
    int GetTamanho();
    void SetTamanho(int n);
    void SePrepara();
    void RecebeNave(int nave);
    int RetiraNave();
    void ImprimeNaves();
};

#endif