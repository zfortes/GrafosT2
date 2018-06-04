Aluno: Jose Fortes Neto 16/0128331
Aluno: Saulo Mendes Feitosa 16/0144884

Compilacao:
    Para compilar bastar digitar o comando "make" (sem aspas) no terminal.
    Em seguida digite "./t" (sem aspas) para executar o algoritmo.

Codigo:
    Os comentarios do codigo estao contidos nos .cpp junto a implementacao dos metodos.

Saida:
    O programa imprime na tela as escolas do grafo e em seguida os professores contratados por esta.

Compilacao/Execucao:
	O makefile criado para compilar o programa contém o seguinte comando para o terminal "g++ -std=c++11 -o t main.cpp grafos.cpp arquivo.cpp emparelhamento.cpp". Feita a compilação o programa é executado ao se digitar "./t" no terminal. No início da execução, o programa lê o arquivo texto "entradaProj3TAG" e enquanto lê o mesmo, monta um grafo composto por vertices que representam as escolas e os professores. Após montado o grafo o programa aplica um algoritmo adaptado de Gale-Shapley para encontrar um emparelhamento estável que beneficia os professores. Feito o emparelhamento o programa mostra na tela as escolas, seus indíces e os professores que ocuparam as vagas da mesma.
