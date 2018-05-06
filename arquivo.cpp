#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"
#include <fstream>
#include <string>

using namespace std;

Grafo *Arquivo::lerGrafo(){
    ifstream file ("top_datasets/top_small.txt");

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
