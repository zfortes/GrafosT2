#include<iostream>
#include <list>
#include <stack>
#include <iterator>
#include "ordenacaodois.h"
#include "grafos.h"
#include <cstdio>
#include <vector>
using namespace std;

//------------------------------
// vector<int> lista; // dos vértices de grau zero
//------------------------------

void OrdenacaoDois::ordena_topologicamente(Grafo *grafo){

	int n = grafo->getVertices();
    for(int i = 0;i < n;i++){
		if(grafo->grau[i] == 0){
		std::cout << "incluiu o = " << i << '\n';
			lista.push_back(i);
		}
	}

    // o procedimento a ser feito é semelhante a uma BFS

    int ini = 0;
    while(ini < (int)lista.size()){

        int atual = lista[ini];
		std::cout << "Atual = " <<atual;
        ini++;
		std::cout << "   size = " << grafo->adjacencia[atual].size()<<'\n';

		for(int i : grafo->adjacencia[atual]){
            grafo->grau[i]--;
            if(grafo->grau[i] == 0)
				lista.push_back(i); // se o grau se tornar zero, acrescenta-se a lista
        }
    }
	std::cout << "tamanho lista = " <<lista.size()<<endl;
}

void OrdenacaoDois::imprime_ordenacao(int n){
	// agora, se na lista não houver N vértices,
	// sabemos que é impossível realizar o procedimento

    if((int)lista.size() < n) printf("impossivel\n");
    else{
        for(int i = 0;i < (int)lista.size();i++) printf("%d ", lista[i]);
        printf("\n");
    }
}
