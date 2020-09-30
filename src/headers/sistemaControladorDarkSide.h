#ifndef SISTEMA_CONTROLADOR_DARKSIDE
#define SISTEMA_CONTROLADOR_DARKSIDE

#include "preparacao.h"
#include "combate.h"
#include "naveAvariada.h"

class SistemaControladorDarkSide{
  private:
    Preparacao preparacao;
    Combate combate;
    NaveAvariada nave_avariada;
  public:
    SistemaControladorDarkSide();
    SistemaControladorDarkSide(int n);
    void IniciaAutomatico();
    void AdicionaNave(int nave);    
    void PainelDeComando(int comando);
    

};


#endif