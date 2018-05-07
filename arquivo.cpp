#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"
#include <fstream>
#include <string>

using namespace std;



Grafo *Arquivo::lerGrafo(string texto){
    ifstream file (texto);

    int i, j, ab, ae;
    string aux, sae;
    Grafo *grafo=NULL;

    if (file.is_open()){
        string line;
        getline (file,line);
        grafo = new Grafo(stoi(line));
        while (! file.eof() ){
            getline (file,line);
            i = 0;
            j=0;
            while (line[i]!=' '){
                aux[j]=line[i];
                i++;
                j++;
            }
            ab = stoi(aux);
            i++;
            j=0;
            while (line[i]!='\0'){
                aux[j]=line[i];
                i++;
                j++;
            }
            ae = stoi(aux);
            grafo->add_adjacente(ab, ae);
        }
        file.close();
    }

     else
        cout << "O arquivo nao pode ser lido.";

     return grafo;
}

void Arquivo::gravaOrdenacaoDois(vector<int> lista, int t) {
    string arq;

    if (t == 1){
        arq = "out/ordenacaodois/top_small.txt";
    }else{
        if (t == 2){
            arq = "out/ordenacaodois/top_med.txt";
        }else{
            if (t == 3){
                arq = "out/ordenacaodois/top_large.txt";
            }else
                arq = "out/ordenacaodois/top_huge.txt";
        }
    }

    ofstream file;
    file.open(arq);

    for (int i : lista){
        file<<i<<endl;
    }
}

void Arquivo::gravaOrdenacaoUm(list<int> lista, int t) {
    string arq;
    if (t == 1){
        arq = "out/ordenacaoum/top_small.txt";
    }else{
        if (t == 2){
            arq = "out/ordenacaoum/top_med.txt";
        }else{
            if (t == 3){
                arq = "out/ordenacaoum/top_large.txt";
            }else
                arq = "out/ordenacaoum/top_huge.txt";
        }
    }

    ofstream file;
    file.open(arq);

    for (int i : lista){
        file<<i<<endl;
    }
}
