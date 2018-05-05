#include<iostream>
#include <list>
#include <stack>
#include "ordenacaoum.h"
using namespace std;

OrdenacaoUm::OrdenacaoUm(Grafo *grafo)
{
    V = grafo->getVertices();
    this->grafo = grafo;
}

// void OrdenacaoUm::addEdge(int v, int w)
// {
//     adjacencia[v].push_back(w); // Add w to v’s list.
// }

// A recursive function used by topologicalSort
void OrdenacaoUm::topologicalSortUtil(int v, bool visited[],
                                stack<int> &Stack)
{
    // Mark the current node as visited.
    visited[v] = true;

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = grafo->adjacencia[v].begin(); i != grafo->adjacencia[v].end(); ++i)
        if (!visited[*i])
            topologicalSortUtil(*i, visited, Stack);

    // Push current vertex to stack which stores result
    Stack.push(v);
}

// The function to do Topological Sort. It uses recursive
// topologicalSortUtil()
void OrdenacaoUm::topologicalSort()
{
    stack<int> Stack;

    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function to store Topological
    // Sort starting from all vertices one by one
    for (int i = 0; i < V; i++)
      if (visited[i] == false)
        topologicalSortUtil(i, visited, Stack);

    // Print contents of stack
    while (Stack.empty() == false)
    {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}
