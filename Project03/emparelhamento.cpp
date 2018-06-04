#include "emparelhamento.hpp"
#include <list>

//Funcao que testa se uma proposta ja foi feita do professor para a escola
bool Emparelhamento::professorLivre(vector<VerticeP> professor, bool proposta[100][50]){

     for (int i = 0; i< 100; i++){
          if  (professor[i].escola == -1){
               for (int j : professor[i].preferencia){

                    if (proposta[i][j-1]==false){
                         return true;
                    }
               }
          }
	}
     return false;
}

//Funcao que adaptada do algoritmo de Gale-Shapley para encontrar um emparelhamento estavel.
vector<VerticeE> Emparelhamento::emparelha(Grafo* grafo){
     vector<VerticeE> escola;
     copy(grafo->escolas->begin(),grafo->escolas->end(),back_inserter(escola));

     vector<VerticeP> professor;
     copy(grafo->professores->begin(),grafo->professores->end(),back_inserter(professor));

     bool proposta[100][50];


	//Loop que preenche a matriz de propostas inicialmente.
     for (int i = 0; i< 100; i++){
          for(int j = 0 ; j<50; j++){
               proposta[i][j]=false;
          }
	}



     for (VerticeE i : escola){
          i.professor1 = -1;
          i.professor2 = -1;
     }


     int k=0;

	//Loop que roda enquanto ainda houverem propostas a serem feitas pelos professores.
     while (professorLivre(professor, proposta)){
          int pLivre,  eLivre;

          for (int i = 0; i< professor.size(); i++){
               if (professor[i].escola == -1){
                    for (int j : professor[i].preferencia){
                         if (proposta[i][j-1]==false){
                              pLivre = i;
                              break;
                         }
                    }
               }
     	}

          for (int i : professor[pLivre].preferencia){
               if (proposta[pLivre][i-1] == false){
                    proposta[pLivre][eLivre] = true;
                         eLivre = i-1;
                         break;
               }
          }


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
