#include <iostream>
#include <list>
#include <algorithm>
#include <time.h>
#include "grafos.h"
#include "arquivo.h"
#include "ordenacaoum.h"
#include "ordenacaodois.h"
#include <bits/stdc++.h>
#include "gnuplot_i.hpp"

using namespace std;

int main(){
	clock_t c2, c1; /* variáveis que contam ciclos do processador */
	double tempo;
	int vertices, i=0, j, arestas;
        std::vector<double> x, y;//Vetores que serao usados para montar o grafico
	string texto="top_datasets/top_small.txt";

	Arquivo *arquivo = new Arquivo();
	Grafo *grafo = arquivo->lerGrafo(texto);

	c1 = clock();
	OrdenacaoUm *ordenacaoum = new OrdenacaoUm(grafo);
	ordenacaoum->ordena();
	ordenacaoum->imprime_ordenacao();
	cout << "Ordenacao 1 para 10 vertices"<<endl;
	c2 = clock();
	tempo = (c2 - c1)*100000/CLOCKS_PER_SEC;
	tempo = tempo/100;
	x.push_back((double)tempo);

	arquivo->gravaOrdenacaoUm(ordenacaoum->getLista(), 1);

	getchar();
	c1 = clock();
	texto="top_datasets/top_med.txt";
	grafo = arquivo->lerGrafo(texto);
	OrdenacaoUm *ordenacaoum2 = new OrdenacaoUm(grafo);
	ordenacaoum2->ordena();
	ordenacaoum2->imprime_ordenacao();
	cout << "Ordenacao 1 para 100 vertices"<<endl;
	c2 = clock();
	tempo = (c2 - c1)*100000/CLOCKS_PER_SEC;
	tempo = tempo/100;
	x.push_back((double)tempo);

	arquivo->gravaOrdenacaoUm(ordenacaoum->getLista(), 2);

	getchar();
	c1 = clock();
	texto="top_datasets/top_large.txt";
	grafo = arquivo->lerGrafo(texto);
	OrdenacaoUm *ordenacaoum3 = new OrdenacaoUm(grafo);
	ordenacaoum3->ordena();
	ordenacaoum3->imprime_ordenacao();
	cout << "Ordenacao 1 para 10000 vertices"<<endl;
	c2 = clock();
	tempo = (c2 - c1)*100000/CLOCKS_PER_SEC;
	tempo = tempo/100;
	x.push_back((double)tempo);

	arquivo->gravaOrdenacaoUm(ordenacaoum->getLista(), 3);

	getchar();
	c1 = clock();
	texto="top_datasets/top_huge.txt";
	grafo = arquivo->lerGrafo(texto);
	OrdenacaoUm *ordenacaoum4 = new OrdenacaoUm(grafo);
	ordenacaoum4->ordena();
	ordenacaoum4->imprime_ordenacao();
	cout << "Ordenacao 1 para 100000 vertices"<<endl;
	c2 = clock();
	tempo = (c2 - c1)*100000/CLOCKS_PER_SEC;
	tempo = tempo/100;
	x.push_back((double)tempo);

	arquivo->gravaOrdenacaoUm(ordenacaoum->getLista(), 4);
	/*for (i=0; i<grafo->getVertices(); i++){

	   	std::cout << "Grafo: " << i;
	   	// for (grafo->grau[i]){
	   		std::cout << " = " << grafo->grau[i] << ","<<'\n';
	   	// }
	}*/

	getchar();
	c1 = clock();
	texto="top_datasets/top_small.txt";
	grafo = arquivo->lerGrafo(texto);
	OrdenacaoDois *o2 = new OrdenacaoDois();
	o2->ordena_topologicamente(grafo);
	o2->imprime_ordenacao(grafo->getVertices());
	cout << "Ordenacao 2 para 10 vertices"<<endl;
	c2 = clock();
	tempo = (c2 - c1)*100000/CLOCKS_PER_SEC;
	tempo = tempo/100;
	x.push_back((double)tempo);

	arquivo->gravaOrdenacaoDois(o2->getLista(), 1);
	// // for (i=0; i<grafo->getVertices(); i++){
	// // 	// grafo->vert[i].add_adjacente(ae);
	// // 	std::cout << "Grafo: " << i <<'\n';
	// // 	for (int n : grafo->adjacencia[i]){
	// // 		std::cout << " " << n << ","<<'\n';
	// // 	}
	// // }

	getchar();
	c1 = clock();
	texto="top_datasets/top_med.txt";
	grafo = arquivo->lerGrafo(texto);
	o2->ordena_topologicamente(grafo);
	o2->imprime_ordenacao(grafo->getVertices());
	cout << "Ordenacao 2 para 100 vertices"<<endl;
	c2 = clock();
	tempo = (c2 - c1)*100000/CLOCKS_PER_SEC;
	tempo = tempo/100;
	x.push_back((double)tempo);

	arquivo->gravaOrdenacaoDois(o2->getLista(), 2);

	getchar();
	c1 = clock();
	texto="top_datasets/top_large.txt";
	grafo = arquivo->lerGrafo(texto);
	o2->ordena_topologicamente(grafo);
	o2->imprime_ordenacao(grafo->getVertices());
	cout << "Ordenacao 2 para 10000 vertices"<<endl;
	c2 = clock();
	tempo = (c2 - c1)*1000/CLOCKS_PER_SEC;
	x.push_back((double)tempo);

	arquivo->gravaOrdenacaoDois(o2->getLista(), 3);

	getchar();
	c1 = clock();
	texto="top_datasets/top_huge.txt";
	grafo = arquivo->lerGrafo(texto);
	o2->ordena_topologicamente(grafo);
	o2->imprime_ordenacao(grafo->getVertices());
	cout << "Ordenacao 2 para 100000 vertices"<<endl;
	c2 = clock();
	tempo = (c2 - c1)*1000/CLOCKS_PER_SEC;
	x.push_back((double)tempo);

	arquivo->gravaOrdenacaoDois(o2->getLista(), 4);

	getchar();

 try{//Parte Grafica
        Gnuplot g1("lines");
        g1.set_xlabel("tempo em milisegundos");
        g1.set_ylabel("log(Vertices)");

        y.push_back((double)log(10));
        y.push_back((double)log(100));
        y.push_back((double)log(10000));
        y.push_back((double)log(100000));
        y.push_back((double)log(10));
        y.push_back((double)log(100));
        y.push_back((double)log(10000));
        y.push_back((double)log(100000));
        
//Parte que monta e mostra na tela o grafico
        cout << endl << endl << "Fim do Programa" << endl;
        g1.set_grid();
        g1.set_style("points").plot_xy(x,y,"user-defined points 2d");
        g1.showonscreen(); // window output
        getchar();


    }
    catch (GnuplotException &ge){
        cout << ge.what() << endl;
    }
	return 0;
}
