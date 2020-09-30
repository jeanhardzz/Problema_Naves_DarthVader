#include <iostream>

#include "combate.h"

Combate::Combate(){

}

void Combate::EnviaNave(int nave){
  /*Recebe uma nave e a insere no inicio da lista de naves em combate.
  * O(1) 
  * Lista encadeada :)
  */
  TipoItem item;
  item.SetChave(nave);
  this->lista.InsereInicio(item);
  std::cout<<"nave "<<nave<<" em combate"<<std::endl;
}

int Combate::RecuarNave(int nave){ //
  /*Recebe uma nave e a remove da lista de naves em combate.
  * O(n) no pior caso 
  * O(1) no melhor caso
  * porque pesquisa na lista a nave
  */
  TipoItem nave_avariada;

  nave_avariada.SetChave(nave);
  nave_avariada=this->lista.RemoveItem(nave_avariada);

  return nave_avariada.GetChave();


}