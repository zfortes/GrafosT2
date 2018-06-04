#include "emparelhamento.hpp"
#include <list>

bool Emparelhamento::professorLivre(vector<VerticeP> professor, bool proposta[100][50]){

     for (int i = 0; i< 100; i++){
          if  (professor[i].escola == -1){
               for (int j : professor[i].preferencia){
                    // cout<<j<<endl;
                    if (proposta[i][j-1]==false){
                         return true;
                    }
               }
          }
	}
     return false;
}

vector<VerticeE> Emparelhamento::emparelha(Grafo* grafo){
     vector<VerticeE> escola;
     copy(grafo->escolas->begin(),grafo->escolas->end(),back_inserter(escola));
     // escola.swap(*grafo->escolas);
     vector<VerticeP> professor;
     copy(grafo->professores->begin(),grafo->professores->end(),back_inserter(professor));
     // professor.swap(*grafo->professores);

     // for (int i : professor[0].preferencia){
     //      cout<<i<<endl;
     // }

     bool proposta[100][50];



     for (int i = 0; i< 100; i++){
          // professor[i].escola=0;
          for(int j = 0 ; j<50; j++){
               proposta[i][j]=false;
          }
	}



     for (VerticeE i : escola){
          i.professor1 = -1;
          i.professor2 = -1;
     }


     int k=0;

     while (professorLivre(professor, proposta)){
          int pLivre,  eLivre;

          //Encontra um indice de professor livre
          for (int i = 0; i< professor.size(); i++){
               if (professor[i].escola == -1){
                    for (int j : professor[i].preferencia){
                         // cout<<j<<endl;
                         if (proposta[i][j-1]==false){
                              pLivre = i;
                              break;
                         }
                    }
               }
     	}

          // for (VerticeP i : professor){
          //      if (i.escola == 0){
          //           pLivre = i.id;
          //           break;
          //      }
          // }

          //Procura uma escola que nao esteja ligada a esse professor
          cout<<"Plivre "<<pLivre<<endl;
          for (int i : professor[pLivre].preferencia){
               // cout<<i<<endl;
               if (proposta[pLivre][i-1] == false){
                    cout<<"entour"<<endl;
                    proposta[pLivre][eLivre] = true;
                    // if (escola[i].preferencia <= professor[pLivre].habilitacoes){
                         eLivre = i-1;
                         break;
                    // }
               }
          }
          cout<<"Saiu"<<endl;
          // getchar();




          cout<<"Proposta = "<<proposta[pLivre][eLivre]<<endl;

          if ((escola[eLivre].professor1 == -1) || (escola[eLivre].vagas == 2) && (escola[eLivre].professor2 == -1)){
               if (escola[eLivre].preferencia <= professor[pLivre].habilitacoes){
                    if(escola[eLivre].professor1 == -1){
                         escola[eLivre].professor1 = pLivre;
                         professor[pLivre].escola = eLivre;
                    }else{
                         escola[eLivre].professor2 = pLivre;
                         professor[pLivre].escola = eLivre;
                    }
               }
          }
          else{

               int encontrou = 0;
               if (escola[eLivre].professor1>-1){

                    if (professor[escola[eLivre].professor1].habilitacoes < professor[pLivre].habilitacoes){

                         professor[escola[eLivre].professor1].escola = -1;

                         professor[pLivre].escola = eLivre;
                         escola[eLivre].professor1 = pLivre;
                         encontrou = 1;
                    }

               }

               if ((escola[eLivre].vagas == 2) && (encontrou != 1) && (escola[eLivre].professor2 > -1)){
                    if (professor[escola[eLivre].professor2].habilitacoes < professor[pLivre].habilitacoes){
                         professor[escola[eLivre].professor2].escola = -1;
                         professor[pLivre].escola = eLivre;
                         escola[eLivre].professor2 = pLivre;
                    }
               }
          }

     }


     return escola;

}
