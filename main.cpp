#include <iostream>
#include <list>
#include <algorithm>

using namespace std;


class Grafo{
	int vertices; //numero de vertices do grafo
	list<int> *vert; //ponteiro para array dos vizinhos
public:
	Grafo(int vertices);
	void adicionar_aresta(int v1, int v2); //Adiciona v2 na lista de adjacencia de v1
	bool verifica_adjacente(int v1, int v2); //Verifica se v2 encontra-se na lista de adjacencia de v1
};


Grafo::Grafo(int vertices){
	this->vertices = vertices;
	vert = new list<int>[vertices];

}

void Grafo::adicionar_aresta(int v1, int v2){
	vert[v1].push_back(v2);
	cout << vert[2].size() << endl;
}

bool Grafo::verifica_adjacente(int v1, int v2){
	if(find(vert[v1].begin(), vert[v1].end(), v2) != vert[v1].end())
		return true;
	return false;
}


int main(){
	int vertices;
	
	cin >> vertices;
	Grafo grafo(vertices);

return 0;
}



