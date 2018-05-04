#ifndef GRAFOST2_ORDENACAOUM_H
#define GRAFOST2_ORDENACAOUM_H
#include<iostream>
#include <list>
#include <stack>
#include "grafos.h"
using namespace std;


#define MAXN 100000

int grau[MAXN] = {};

// Class to represent a graph
class OrdenacaoDois:public Grafo{
	int n; // número de vértices
public:
	void ordena_topologicamente(int n, Grafo grafo[]);
	void imprime_ordenacao(int n);

};

#endif
