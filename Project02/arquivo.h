#ifndef GRAFOST2_ARQUIVO_H
#define GRAFOST2_ARQUIVO_H

#include "grafos.h"

using namespace std;

class Arquivo{
public:
    Grafo *lerGrafo(string texto);
    void gravaOrdenacaoUm(list<int> lista, int t);
    void gravaOrdenacaoDois(vector<int> lista, int t);
};

#endif
