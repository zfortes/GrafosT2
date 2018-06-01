#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"
#include <bits/stdc++.h>


using namespace std;

int main(){
	int id, hab, professor, escola;
	list<VerticeP>::iterator prof;
	list<VerticeE>::iterator esc;
	list<int>::iterator pref;
	Arquivo *arquivo = new Arquivo();
	Grafo *grafo = arquivo->lerGrafo();

	
	srand (time(NULL));
	professor = rand() % 100 + 1;
	escola = rand() % 50 + 1;
	cout << "P " << professor << endl;
	cout << "E " << escola << endl;
	if (grafo->professores->size() >= professor){
		prof = next(grafo->professores->begin(), professor-1);
		cout << "professor:" << prof->id;
		cout << " habilitacoes:" << prof->habilitacoes;
		cout << " lista preferencia:";
		for(int i : prof->preferencia){
			cout << i << " ";
		}
		cout << endl;	
	}

	if (grafo->escolas->size() >= escola){
		esc = next(grafo->escolas->begin(), escola-1);
		cout << "escola:" << esc->id;
		cout << " exigencia:" << esc->preferencia;
		cout << " vagas:" << esc->vagas << endl;
	}

	return 0;
}
