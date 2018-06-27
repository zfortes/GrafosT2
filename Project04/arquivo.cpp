
#include <iostream>
#include <list>
#include <algorithm>

#include "arquivo.h"
#include <fstream>



using namespace std;


// Abre o arquivo cujo o nome é creditcard.csv
// e em seguida cria o grafo com os vertices.
vector<Grafo>  Arquivo::lerGrafo(){
    ifstream file ("creditcard.csv");

    int i, j, k;

    string aux;


    long double tempo;
    // long double v;

    vector<Grafo> v;
    if (file.is_open()){


        string line;
        // getline (file,line);
        getline (file,line);
        Grafo *grafo;
        while (!file.eof() ){
             grafo= new Grafo();
             i=1;
             line.erase();

            j=0;
            aux.erase();
            while (line[i]!=','){
                aux.push_back(line[i]);

                i++;
                j++;
            }

            grafo->tempo=stoi(aux);
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

                grafo->v.push_back(stold(aux));
                j=0;
                i++;
            }


            aux.erase();
            j=0;
            while (line[i]!=','){
                aux.push_back(line[i]);
                i++;
                j++;

            }


           grafo->amount=stof(aux);

           i+=3;
           aux.erase();
           aux.push_back(line[i]);
           grafo->fraude=stoi(aux);

            v.push_back(*grafo);

            getline (file,line);
       }

       file.close();

    }
     else{
        cout << "O arquivo nao pode ser lido.";
   }

     return v;
}
