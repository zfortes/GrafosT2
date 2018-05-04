#ifndef GRAFOST2_ORDENACAOUM_H
#define GRAFOST2_ORDENACAOUM_H
#include<iostream>
#include <list>
#include <stack>
using namespace std;

// Class to represent a graph
class OrdenacaoUm
{
    int V;    // No. of vertices'

    // Pointer to an array containing adjacency listsList
    list<int> *adj;

    // A function used by topologicalSort
    void topologicalSortUtil(int v, bool visited[], stack<int> &Stack);
public:
    Graph(int V);   // Constructor

     // function to add an edge to graph
    void addEdge(int v, int w);

    // prints a Topological Sort of the complete graph
    void topologicalSort();
};
