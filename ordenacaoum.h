#ifndef GRAFOST2_ORDENACAOUM_H
#define GRAFOST2_ORDENACAOUM_H
#include<iostream>
#include <list>
#include <stack>
#include "grafos.h"
using namespace std;

// Class to represent a graph
class OrdenacaoUm{
    int V;    // No. of vertices'
    list<int> lista;
    // A function used by topologicalSort
    Grafo *grafo;
    void topologicalSortUtil(int v, bool visited[]);
public:
     OrdenacaoUm(Grafo *);   // Constructor

     // function to add an edge to graph
    void addEdge(int v, int w);

    // prints a Topological Sort of the complete graph
    void topologicalSort();

    void imprime_ordenacao();
    list<int> getLista(){
        return lista;
    }
};

#endif
