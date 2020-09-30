#include <iostream>

#include "naveAvariada.h"

NaveAvariada::NaveAvariada(){

}

void NaveAvariada::RecebeNave(int nave){
  /*Recebe uma nave, cria um item e o coloca na fila
  * O(1)
  */
  TipoItem item;
  item.SetChave(nave);
  this->fila.Enfileira(item);
  std::cout<<"nave "<<nave<<" avariada"<<std::endl;
}

int NaveAvariada::NaveConsertada(){
  /*Desempilha uma nave e a retorna
  * O(1)
  */  
  TipoItem item;
  item = this->fila.Desenfileira();
  std::cout<<"nave "<<item.GetChave()<<" consertada"<<std::endl;
  return item.GetChave();
}


void NaveAvariada::ImprimeNaves(){
  /*Basicamente Desenfileira da fila principal,
  * imprime e depois Enfileira de novo na principal.  
  * O(n)
  */
  FilaArranjo fila_aux;
  TipoItem aux;
  int tamanho = this->fila.GetTamanho();
  
  for(int i=0;i<tamanho;i++){    
    aux = this->fila.Desenfileira();
    aux.Imprime();
    this->fila.Enfileira(aux);
  }  
}

