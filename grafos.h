//
// Created by fortes on 01/05/18.
//

#ifndef GRAFOST2_GRAFOS_H
#define GRAFOST2_GRAFOS_H

#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"


using namespace std;

// class Vertice{
// public:
//     int id;
//     list<int> adjacentes;
//
//     void add_adjacente(int ad);
//     //Vertice(int id, int vertices);
// };

class Grafo{
    int vertices; //numero de vertices do grafo
public:
    int *grau;

    list<int> *adjacencia;
    Grafo(int);

    int getVertices(){
        return vertices;
    }
    void add_adjacente(int, int);
    // void setVertice(int);
//	bool verifica_adjacente(int v1, int v2); //Verifica se v2 encontra-se na lista de adjacencia de v1
};



#endif //GRAFOST2_GRAFOS_H
