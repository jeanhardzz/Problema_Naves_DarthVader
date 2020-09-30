#include <iostream>

#include "sistemaControladorDarkSide.h"

SistemaControladorDarkSide::SistemaControladorDarkSide(int n){
  this->preparacao.SetTamanho(n);
}

void SistemaControladorDarkSide::AdicionaNave(int nave){
  this->preparacao.RecebeNave(nave);
}

void SistemaControladorDarkSide::IniciaAutomatico(){
  int comando;

  this->preparacao.SePrepara();
  //this->preparacao.ImprimeNaves();

  while(1){    
    std::cin>>comando;
    this->PainelDeComando(comando);
  }
}

void SistemaControladorDarkSide::PainelDeComando(int comando){
  int nave;
  if(comando==0){
    nave = this->preparacao.RetiraNave();
    this->combate.EnviaNave(nave);
  }else if(comando==-1){    
    nave = nave_avariada.NaveConsertada();
    preparacao.RecebeNave(nave);    
  }else if(comando==-2){
    this->preparacao.ImprimeNaves();
  }else if(comando==-3){
    this->nave_avariada.ImprimeNaves();
  }else{
    nave = this->combate.RecuarNave(comando);
    this->nave_avariada.RecebeNave(nave);
  }
}