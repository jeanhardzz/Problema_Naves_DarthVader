#include <iostream>

#include "headers/sistemaControladorDarkSide.h"

int main(){  
  int num_frotas;

  std::cin>>num_frotas;
  SistemaControladorDarkSide Vader(num_frotas);
  
  int i;
  for(i=0; i < num_frotas; i++){
    int id_nave;
    std::cin>>id_nave;
    Vader.AdicionaNave(id_nave);
  }

  int operacao;
  while(std::cin>>operacao){
    Vader.PainelDeComando(operacao);        
  }
   return 0;
}
