#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

class Vertice{
public:
	int id;
	list<int> *adjacentes;
	Vertice(int id, int vertices);
};

Vertice::Vertice(int id, int vertices){
	this->id = id;
	adjacentes = new list<int>[vertices];
}

class Grafo{
	int vertices; //numero de vertices do grafo
public:
	
	list<Vertice> *vert; //ponteiro para array dos vizinhos
	Grafo(int vertices);
	void adicionar_aresta(int v1, int v2); //Adiciona v2 na lista de adjacencia de v1
//	bool verifica_adjacente(int v1, int v2); //Verifica se v2 encontra-se na lista de adjacencia de v1
};


Grafo::Grafo(int vertices){
	int i=0;
	this->vertices = vertices;
	vert = new list<Vertice>[vertices];
}

void Grafo::adicionar_aresta(int v1, int v2){
	vert[v1].adjacentes.push_back(v2);
}

/*bool Grafo::verifica_adjacente(int v1, int v2){
	if(find(vert[v1].adjacentes.begin(), vert[v1].adjacentes.end(), v2) != vert[v1].end())
		return true;
	return false;
}*/


int main(){
	int vertices, i=0, j;
	
	cin >> vertices;
	Grafo grafo(vertices);
	while(i<4){
		j=i+1;
		while(j<4){
			grafo.adicionar_aresta(i, j);
			j++;
		}
		i++;
	}

return 0;
}



