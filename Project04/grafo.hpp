#ifndef GRAFOST2_GRAFO_HPP
#define GRAFOST2_GRAFO_HPP

#include <vector>

using namespace std;

class VerticeL{
public:
	int id;
	std::vector<long double> transacao;
};

class VerticeC{
public:
	std::vector<long double> transacao;

};

class Grafo{
public:
    vector<VerticeL> linha;
    vector<VerticeC> coluna;
};

#endif
