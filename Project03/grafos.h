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

class VerticeP{//Vertice para um professor
public:
	int id;
	int habilitacoes;//numero de habilitacoes que o professor tem
	list<int> preferencia;//lista de preferencia de escolas que o professor deseja entrar
	int escola;//indice da escola a que este professor se liga(aresta)

};

class VerticeE{//Vertice para uma escola
public:
	int id;
	int vagas;//Quantidade de professores que aceita
	int preferencia;//Numero de habilitacoes minimo que a escola aceita de um professor
	int professor;//indice do professor a que esta escola se liga(aresta)
};

class Grafo{
    int verticesP; //numero de vertices de professores
    int verticesE; //numero de vertices de escolas
public:
//    int *grau;

    list<VerticeP> *professores;
    list<VerticeE> *escolas;
    Grafo(int, int);

/*    int getVertices(){
        return vertices;
    }*/
//    void add_adjacente(int, int);
};



#endif //GRAFOST2_GRAFOS_H
