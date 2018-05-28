//
// Created by fortes on 01/05/18.
//
#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
using namespace std;

//cria a aresta entre o professor e a escola gerando o emparelhamento
/*void Grafo::add_adjacente(int idp, int ide){
	Grafo::professores[idp]->escola=ide;
	Grafo::escolas[ide]->professor=idp;
//    grau[ad]++;
}*/

// Cria e aloca a memoria de um novo grafo.
Grafo::Grafo(int verticesP, int verticesE){
	this->verticesP = verticesP;
	this->verticesE = verticesE;
	professores = new list<VerticeP>[verticesP];
	escolas = new list<VerticeE>[verticesE];
//    adjacencia = new list<int>[vertices];
//    grau = new int[vertices];
}
