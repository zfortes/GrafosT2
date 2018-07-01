#include <iostream>
#include "arquivo.h"


using namespace std;

int main() {
     /* code */

     Arquivo *arquivo = new Arquivo();
     Grafo *grafo = arquivo->lerGrafo();
/*
     for (Grafo g : grafo){
          cout<<g.tempo;
          for (long double l: g.v)
               cout<<","<<l;

          cout<<","<<g.amount;
          cout<<","<<g.fraude<<endl;
     }

     string car;
     cout<<"END ->";
     cin>>car;
*/
     return 0;
}
