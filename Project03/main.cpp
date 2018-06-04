#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"
#include <bits/stdc++.h>
#include "emparelhamento.hpp"


using namespace std;

int main(){
	int id, hab, professor, emparelhados=0;
	Arquivo *arquivo = new Arquivo();
	Grafo *grafo = arquivo->lerGrafo();
	Emparelhamento *p = new Emparelhamento();

	vector<VerticeE> escola = p->emparelha(grafo);
	//Loop que imprime todas as escolas da lista de escolas do grafo e os respectivos professores das mesmas.
	for (VerticeE i : escola){
		cout<<"Escola "<< i.id  <<endl;
		if(i.professor1+1>0){
			emparelhados++;
			cout<<"Prof 1 " <<i.professor1+1<<endl;
			if(i.vagas>1){
				cout<<"Prof 2 " <<i.professor2+1<<endl;
				emparelhados++;
			}
		}
		else
			cout <<"Escola sem professores" << endl;
		cout << endl;
	}

	return 0;
}
