#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"
#include <fstream>
#include <string>

using namespace std;


// Abre o arquivo cujo o nome é definido pela string
// texto e em seguida cria o grafo com as adjacencias e vertices.
Grafo *Arquivo::lerGrafo(){
    ifstream file ("entradaProj3TAG.txt");

	int i, j, ab=0, ae=0;
	string aux, sae;
	VerticeP Vprof;
	VerticeE Vescola;
	Grafo *grafo=NULL;

	if (file.is_open()){
	        string line;
	        getline (file,line);
	        grafo = new Grafo(100, 50);
	        while (! file.eof() ){
	        	getline (file,line);
	        	i = 0;
	        	j=1;
			//(P6, 2): (E10, E5, E6, E27, E13)
			if(line[j]=='P'){
				j++;
				while(line[j]!=','){
					aux[i]=line[j];
        	        		i++;
        	        		j++;
        	    		}
				Vprof.id = stoi(aux);
				j=j+2;
				aux[0] = line[j];
				Vprof.habilitacoes = stoi(aux);
				j=j+2;
				while(line[j]!=')'){
					if(line[j]=='E'){
						i=0;
						j++;
						while((line[j]!=',') && (line[j]!=')')){
							aux[i]=line[j];
							i++;
							j++;
						}
						Vprof.preferencia.push_back(stoi(aux));
					}
					if(line[j]!=')')
						j++;
				}
				grafo->professores[ab].push_back(Vprof);
				ab++;
			}//(E36):(2):(1)
			else if(line[j]=='E'){
				j++;
				while(line[j]!=')'){
					aux[i]=line[j];
					i++;
					j++;
				}
				Vescola.id = stoi(aux);
				while(line[j]!='(')
					j++;
				j++;
				aux[0]=line[j];
				Vescola.preferencia = stoi(aux);
				while(line[j]!='(')
					j++;
				j++;
				aux[0]=line[j];
				Vescola.vagas = stoi(aux);
				grafo->escolas[ae].push_back(Vescola);
				ae++;
			}
/*            while (line[i]!=' '){
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
            grafo->add_adjacente(ab, ae);*/
        }
        file.close();
    }

     else
        cout << "O arquivo nao pode ser lido.";

     return grafo;
}

