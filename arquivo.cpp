#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"
#include <fstream>
#include <string>

using namespace std;



Grafo *Arquivo::lerGrafo(){
    ifstream file ("top_datasets/top_med.txt");

    int i, j, ab, ae;
    string aux, sae;
    Grafo *grafo=NULL;

    if (file.is_open()){
        string line;
        getline (file,line);
        grafo = new Grafo(stoi(line)); //envia o numero de vertices q o grafo tem
        std::cout << stoi(line)  << '\n';
        while (! file.eof() ){
            getline (file,line); // como foi aberto em modo texto(padrão)
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
            grafo->vert[ab].add_adjacente(ae);


             // cout << line << endl;
        }
        file.close();
    }

     else cout << "Unable to open file";

     return grafo;
}
