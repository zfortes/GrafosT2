#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"

using namespace std;


int main(){
	int vertices, i=0, j, arestas;

	Arquivo *arquivo = new Arquivo();
	Grafo *grafo = arquivo->lerGrafo();

	// for (i=0; i<grafo->getVertices(); i++){
	// 	// grafo->vert[i].add_adjacente(ae);
	// 	std::cout << "Grafo: " << i <<'\n';
	// 	for (int n : grafo->adjacencia[i]){
	// 		std::cout << " " << n << ","<<'\n';
	// 	}
	// }


	return 0;
}
