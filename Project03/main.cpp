#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"
#include <bits/stdc++.h>


using namespace std;

int main(){
	int id, hab, pf=2;
	Arquivo *arquivo = new Arquivo();
	Grafo *grafo = arquivo->lerGrafo();

	if (grafo->professores.size() > pf){
		list<VerticeP>::iterator it = next(grafo->professores.begin(), pf);
		cout << it.id << endl;
		cout << it.habilitacoes << endl;
	}
	//Vprof.preferencia.push_back(stoi(aux));
	//grafo->professores[ab].push_back(Vprof);
//	cout << id << endl;
//	cout << hab << endl;
	
	return 0;
}
