#include<iostream>
#include <list>
#include <stack>
#include "ordenacaoum.h"
using namespace std;

//Construtor que inicializa a classe salvando o grafo na mesma.
OrdenacaoUm::OrdenacaoUm(Grafo *grafo){
    V = grafo->getVertices();
    this->grafo = grafo;
}

// Funcao recursiva que visita todo  o grafico e vai marcando
// quais as vertices que ja foram visitadas.
// Apos visitar todos as vertices do qual o vertice atual
// tem adjacencia, ele insere esse vertice em uma lista;
void OrdenacaoUm::ordenacaoDfsBased(int v, bool visited[]){
    visited[v] = true;

    list<int>::iterator i;
    for (i = grafo->adjacencia[v].begin(); i != grafo->adjacencia[v].end(); ++i){
        if (!visited[*i]){
            ordenacaoDfsBased(*i, visited);
        }
    }

    lista.push_front(v);
}

// Funcao que imprime a ordenacao contida na lista
void OrdenacaoUm::imprime_ordenacao(){
    for (int i : lista){
        std::cout << i<<" ";
    }
    std::cout << '\n';
}

// Funcao que define, inicializa as
// variaveis e chama a funcao recursiva ordenacaoDfsBased()
void OrdenacaoUm::ordena(){

    bool *visited = new bool[V];
    for (int i = 0; i < V; i++){
        visited[i] = false;
    }

    for (int i = 0; i < V; i++){
        if (visited[i] == false){
            ordenacaoDfsBased(i, visited);
        }
    }

}
