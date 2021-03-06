#ifndef GRAFOST2_ORDENACAODOIS_H
#define GRAFOST2_ORDENACAODOIS_H


#include<iostream>
#include <list>
#include <vector>
#include <stack>
#include "grafos.h"
using namespace std;

class OrdenacaoDois{
	vector<int> lista;
public:
	void ordena_topologicamente(Grafo *grafo);
	void imprime_ordenacao(int n);
	std::vector<int> getLista(){
		return lista;
	}
};

#endif
