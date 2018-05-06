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
};



#endif //GRAFOST2_GRAFOS_H
