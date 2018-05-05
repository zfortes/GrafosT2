#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"
#include "ordenacaoum.h"
#include "ordenacaodois.h"

using namespace std;


int main(){
	int vertices, i=0, j, arestas;

	Arquivo *arquivo = new Arquivo();
	Grafo *grafo = arquivo->lerGrafo();
	// OrdenacaoUm *ordenacaoum = new OrdenacaoUm(grafo);
	// ordenacaoum->topologicalSort();

	for (i=0; i<grafo->getVertices(); i++){

	   	std::cout << "Grafo: " << i;
	   	// for (grafo->grau[i]){
	   		std::cout << " = " << grafo->grau[i] << ","<<'\n';
	   	// }
	}

	OrdenacaoDois *o2 = new OrdenacaoDois();
	o2->ordena_topologicamente(grafo);
	o2->imprime_ordenacao(grafo->getVertices());

	// for (i=0; i<grafo->getVertices(); i++){
	// 	// grafo->vert[i].add_adjacente(ae);
	// 	std::cout << "Grafo: " << i <<'\n';
	// 	for (int n : grafo->adjacencia[i]){
	// 		std::cout << " " << n << ","<<'\n';
	// 	}
	// }


	return 0;
}
