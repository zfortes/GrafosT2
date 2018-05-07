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
	string texto="top_datasets/top_huge.txt";

	Arquivo *arquivo = new Arquivo();
	Grafo *grafo = arquivo->lerGrafo(texto);


	// OrdenacaoUm *ordenacaoum = new OrdenacaoUm(grafo);
	// ordenacaoum->topologicalSort();
	// ordenacaoum->imprime_ordenacao();
	// arquivo->gravaOrdenacaoUm(ordenacaoum->getLista(), 4);

	/*for (i=0; i<grafo->getVertices(); i++){

	   	std::cout << "Grafo: " << i;
	   	// for (grafo->grau[i]){
	   		std::cout << " = " << grafo->grau[i] << ","<<'\n';
	   	// }
	}*/

	OrdenacaoDois *o2 = new OrdenacaoDois();
	o2->ordena_topologicamente(grafo);
	o2->imprime_ordenacao(grafo->getVertices());
	arquivo->gravaOrdenacaoDois(o2->getLista(), 4);
	// // for (i=0; i<grafo->getVertices(); i++){
	// // 	// grafo->vert[i].add_adjacente(ae);
	// // 	std::cout << "Grafo: " << i <<'\n';
	// // 	for (int n : grafo->adjacencia[i]){
	// // 		std::cout << " " << n << ","<<'\n';
	// // 	}
	// // }
	// getchar();
	// texto="top_datasets/top_med.txt";
	// grafo = arquivo->lerGrafo(texto);
	// o2->ordena_topologicamente(grafo);
	// o2->imprime_ordenacao(grafo->getVertices());
	//
	// getchar();
	// texto="top_datasets/top_large.txt";
	// grafo = arquivo->lerGrafo(texto);
	// o2->ordena_topologicamente(grafo);
	// o2->imprime_ordenacao(grafo->getVertices());
	//
	// getchar();
	// texto="top_datasets/top_huge.txt";
	// grafo = arquivo->lerGrafo(texto);
	// o2->ordena_topologicamente(grafo);
	// o2->imprime_ordenacao(grafo->getVertices());

	return 0;
}
