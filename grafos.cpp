//
// Created by fortes on 01/05/18.
//
#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "ordenacaodois.h"

using namespace std;


void Grafo::add_adjacente(int v,int ad){
    adjacencia[v].push_back(ad);
    grau[v]++;
}
//Vertice::Vertice(int id, int vertices){
//    this->id = id;
//    adjacentes = new list<int>[vertices];
//}

Grafo::Grafo(int vertices){
    this->vertices = vertices;
    adjacencia = new list<int>[vertices];
}

// void Grafo::setVertice(int nVertices){
//     vert = new Vertice[nVertices];
// }
