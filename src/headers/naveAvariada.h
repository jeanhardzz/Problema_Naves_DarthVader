#ifndef NAVE_AVARIADA
#define NAVE_AVARIADA

#include<string>

#include "tads/fila/fila-arranjo.h"

class NaveAvariada{
  private:    
    FilaArranjo fila;

  public:
    NaveAvariada();          
    void RecebeNave(int nave);
    int NaveConsertada();
    void ImprimeNaves();
};

#endif