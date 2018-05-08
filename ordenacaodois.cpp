#include<iostream>
#include <list>
#include <stack>
#include <iterator>
#include "ordenacaodois.h"
#include "grafos.h"
#include <cstdio>
#include <vector>
using namespace std;

// O procedimento a ser feito é semelhante a uma BFS.
// Primeiro ele insere todos os vertices que nao possuem adjacencias apontadas
// para ele em uma lista de vertice de grau 0 e depois o algoritmo busca passar
// por todas as adjacencias de um vertice. Apos
// ter eliminado todas as adjacencias ele insere o atual vertice na lista de vertices
// que nao possuem mais adjacencias.

void OrdenacaoDois::ordena_topologicamente(Grafo *grafo){

	int n = grafo->getVertices();
    for(int i = 0;i < n;i++){
		if(grafo->grau[i] == 0){
			lista.push_back(i);
		}
	}

    int ini = 0;
    while(ini < (int)lista.size()){
        int atual = lista[ini];
        ini++;

		for(int i : grafo->adjacencia[atual]){
            grafo->grau[i]--;
            if(grafo->grau[i] == 0){
				lista.push_back(i); // se o grau se tornar zero, acrescenta-se a lista
			}
		}
    }

}

// Exibe toda a lista resultante da ordenacao topologica.
// Se a lista nao estiver vazia, vai sendo exibido um a um dos elementos da mesma.
void OrdenacaoDois::imprime_ordenacao(int n){

    if((int)lista.size() < n){
		printf("impossivel\n");
    }else{
        for(int i = 0;i < (int)lista.size();i++){
			printf("%d ", lista[i]);
		}
        printf("\n");
    }
}
