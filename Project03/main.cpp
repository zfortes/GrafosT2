#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"
#include <bits/stdc++.h>
#include "emparelhamento.hpp"


using namespace std;

int main(){
	int id, hab, professor;
	list<VerticeP>::iterator prof;
	list<VerticeE>::iterator esc;
	list<int>::iterator pref;
	Arquivo *arquivo = new Arquivo();
	Grafo *grafo = arquivo->lerGrafo();
	Emparelhamento *p = new Emparelhamento();
	// cout<<"Entou"<<endl;
	vector<VerticeE> escola = p->emparelha(grafo);
	// cout<<"Saiu"<<endl;
	for (VerticeE i : escola){
		cout<<"Escola "<< i.id  <<endl;
		cout<<"Prof 1 " <<i.professor1+1<<endl;
		cout<<"Prof 2 " <<i.professor2+1<<endl;
	}



	return 0;
}
