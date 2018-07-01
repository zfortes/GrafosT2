
#include <iostream>
#include <list>
#include <algorithm>

#include "arquivo.h"
#include <fstream>



using namespace std;


// Abre o arquivo cujo o nome é creditcard.csv
// e em seguida cria o grafo com os vertices.
Grafo  *Arquivo::lerGrafo(){
    ifstream file ("creditcard.csv");

    int i, j, k, parar=0;

    string aux;


    
    Grafo *grafo;
    grafo= new Grafo();
    // long double v;

    if (file.is_open()){


        string line;
        // getline (file,line);
        getline (file,line);
        VerticeL no_linha;
        VerticeC no_coluna;
        while (!file.eof() || parar<=10000){
            i=1;
            line.erase();
            j=0;
            aux.erase();
            while (line[i]!=','){
                aux.push_back(line[i]);

                i++;
                j++;
            }

            no_linha.id=stoi(aux);
            i++;
            j=0;
            k=0;

            for (k=0; k<28; k++){
                 aux.erase();
                 while (line[i]!=','){
                     aux.push_back(line[i]);
                     i++;
                     j++;

                 }

                no_linha.transacao.push_back(stold(aux));
                no_coluna.transacao.push_back(stold(aux));
                j=0;
                i++;
            }

            grafo->linha.push_back(no_linha);
            grafo->coluna.push_back(no_coluna);
            getline (file,line);
            parar++;
       }

       file.close();

    }
    else{
        cout << "O arquivo nao pode ser lido.";
    }

     return grafo;
}
