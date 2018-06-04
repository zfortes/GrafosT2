#ifndef GRAFOST2_EMPARELHAMENTO_H
#define GRAFOST2_EMPARELHAMENTO_H

#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include <vector>

using namespace std;

class Emparelhamento{
public:
     vector<VerticeE> emparelha(Grafo *);
     bool professorLivre(vector<VerticeP> , bool proposta[100][50]);

};



#endif //
