#include <iostream>
#include "preparacao.h"

Preparacao::Preparacao(){
  this->n=0;
}

int Preparacao::GetTamanho(){
  /*Retorna o tamanho inicial ta frota.
  * O(1)
  */
  return this->n;
}

void Preparacao::SetTamanho(int n){
  /*Recebe o tamanho da frota e inicializa
  * O(1)
  */
  this->n=n;
}

void Preparacao::RecebeNave(int nave){
  /*Recebe uma nave, cria um item e o empilha.
  * O(1)
  */
  TipoItem item;
  item.SetChave(nave);
  this->pilha.Empilha(item);
}

void Preparacao::SePrepara(){
  /*Essa funcao sem argumentos executa as funcoes
  * de inicializacao na mao, ou seja, sem um arquivo.
  * Apenas pelas entradas da linha de comando.
  * O(n)
  */
  int nave;  

  std::cout<<"Digite o tamanho da sua frota: ";
  std::cin>>this->n;

  std::cout<<"Digite as naves, uma por vez, seguido de ENTER:\n";

  for(int i=0;i<n;i++){    
    std::cin>>nave;
    this->RecebeNave(nave);
  }
}


void Preparacao::ImprimeNaves(){
  /*Basicamente Desempilha da pilha principal,
  * imprime e depois empilha numa pilha auxiliar.
  * Pra depois Desempilhar da pilha auxilia e
  * empilhar na pilha original.
  * O(2n)
  */
  PilhaArranjo pilha_aux;
  TipoItem aux;
  int tamanho = this->pilha.GetTamanho();
  
  for(int i=0;i<tamanho;i++){    
    aux = this->pilha.Desempilha();
    aux.Imprime();
    pilha_aux.Empilha(aux);
  }

  tamanho = pilha_aux.GetTamanho();
  for(int i=0;i<tamanho;i++){
    this->pilha.Empilha(pilha_aux.Desempilha());
  }
}

int Preparacao::RetiraNave(){
  /*Desempilha uma nave e a retorna
  * O(1)
  */
  TipoItem item;
  item = this->pilha.Desempilha();  
  return item.GetChave();
}