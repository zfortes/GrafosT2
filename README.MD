Aluno: Jose Fortes Neto 16/0128331
Aluno: Saulo Mendes Feitosa 16/0144884

Compilacao:
    Para compilar bastar digitar o comando "make" (sem aspas) no terminal.
    Em seguida digite "./t" (sem aspas) para executar o algoritmo.

Algoritmos de ordenacao topologicas utilizados:
    O algoritmo presente na classe OrdenaUm é baseado no algoritmo DFS e no algoritmo presente no sitio GeeksforGeeks, porem adaptado para uma ordenacao topologica.
        Creditos geeksforgeeks : https://www.geeksforgeeks.org/topological-sorting/
    O algoritmo presente na classe OrdenacaoDois foi baseado no algoritmo de Khan e no algoritmo presente no sitio Noic.
        Creditos noic  http://noic.com.br

Codigo:
    Os comentarios do codigo estao contidos nos .cpp junto a implementacao dos metodos.


Saida:
    Alem de exibir na tela o programa ira colocar a ordenacao em arquivos do tipo .txt nas pastas /out/ordenacaoum e /out/ordenacaodois para que assim a ordenacao fique registrada. A cada nova execucao do programa, os arquivos sao resetados com a  nova ordenacao.

Compilacao/Execucao:
	O codigo esta dividido em arquivos ".h" e ".cpp". Para compilar todo o projeto deve se usar o comando "make", pois um makefile ja esta entre os arquivos do projeto, e preciso tambem ter instalada a biblioteca gnuplot para a parte grafica do programa. Para executar o programa usa se "./t". Apos executado o programa le os arquivos da pasta "top_datasets", e para cada arquivo e mostrado na tela a impressao de seus elementos ordenados, apos cada impressao na tela pressiona se "Enter" para que o programa possa ir a proxima impressao, ao todo 8 ordenacoes e impressoes sao feitas pelo programa. Ao final e montado um grafico que ilustra o desempenho dos dois algoritmos de ordenacao para cada um dos arquivos txt.
