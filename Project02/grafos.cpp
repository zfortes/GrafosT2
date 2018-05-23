//
// Created by fortes on 01/05/18.
//
#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "ordenacaodois.h"

using namespace std;

// Adiciona uma adjacencia no vertice c do
// grafo e incrementa o grau do mesmo.
void Grafo::add_adjacente(int v,int ad){
    adjacencia[v].push_back(ad);
    grau[ad]++;
}

// Cria e aloca a memoria de um novo grafo.
Grafo::Grafo(int vertices){
    this->vertices = vertices;
    adjacencia = new list<int>[vertices];
    grau = new int[vertices];
}
