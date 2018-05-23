#ifndef GRAFOST2_ORDENACAOUM_H
#define GRAFOST2_ORDENACAOUM_H
#include<iostream>
#include <list>
#include <stack>
#include "grafos.h"
using namespace std;

class OrdenacaoUm{
    int V;    //Numero de vertices
    list<int> lista; //Lista com a ordenacao
    Grafo *grafo;
    void ordenacaoDfsBased(int v, bool visited[]);
public:
     OrdenacaoUm(Grafo *);

    void ordena();

    void imprime_ordenacao();
    list<int> getLista(){
        return lista;
    }
};

#endif
