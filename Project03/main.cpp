#include <iostream>
#include <list>
#include <algorithm>
#include "grafos.h"
#include "arquivo.h"
#include <bits/stdc++.h>


using namespace std;

int main(){

	Arquivo *arquivo = new Arquivo();
	Grafo *grafo = arquivo->lerGrafo();
	
	return 0;
}
