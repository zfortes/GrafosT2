//
// Created by fortes on 01/05/18.
//
#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"

using namespace std;


void Vertice::add_adjacente(int ad){
    adjacentes.push_back(ad);
}
//Vertice::Vertice(int id, int vertices){
//    this->id = id;
//    adjacentes = new list<int>[vertices];
//}

Grafo::Grafo(int nVertices){
    vert = new Vertice[nVertices];
}

// void Grafo::setVertice(int nVertices){
//     vert = new Vertice[nVertices];
// }
