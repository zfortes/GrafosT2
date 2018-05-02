#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"

using namespace std;


int main(){
	int vertices, i=0, j, arestas;

	std::cout << "Numero de vertices" << '\n';
	cin>>vertices;

	std::cout << "Insere o numero de arestas" << '\n';
	std::cin >> arestas;

	Grafo *grafo = new Grafo(vertices);

	//Test
	int ab, ae;
	for (i=0; i<arestas; i++){
		std::cin >> ab;
		std::cin >> ae;
		grafo->vert[ab].add_adjacente(ae);
	}

	for (i=0; i<vertices; i++){
		// grafo->vert[i].add_adjacente(ae);
		std::cout << "Grafo: " << i <<'\n';
		for (int n : grafo->vert[i].adjacentes){
			std::cout << " " << n << ","<<'\n';
		}
	}


	return 0;
}
