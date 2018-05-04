#include<iostream>
#include <list>
#include <stack>
#include "ordenacaodois.h"
#include "grafos.h"
#include <cstdio>
#include <vector>
using namespace std;

//------------------------------
vector<int> lista; // dos vértices de grau zero
//------------------------------

void OrdenacaoDois::ordena_topologicamente(int n, Grafo grafo[]){
	
    for(int i = 1;i <= n;i++) if(grau[i] == 0) lista.push_back(i);
    
    // o procedimento a ser feito é semelhante a uma BFS
    
    int ini = 0;
    while(ini < (int)lista.size()){
        
        int atual = lista[ini];
        ini++;
        
        for(int i = 0;i < (int)grafo->adjacencia[atual].size();i++){
            
            int v = grafo->adjacencia[atual][i];
            
            grau[v]--;
            if(grau[v] == 0) lista.push_back(v); // se o grau se tornar zero, acrescenta-se a lista
        }
        
    }
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

