#include <iostream>
#include <list>

using namespace std;

class Graph
{
    int numVertices;
    list<int> *adjList;
    bool *visited;

public:
    Graph(int vertices);
    void add_edge(int src, int dst);
    void DFS(int vertex);
};

Graph::Graph(int vertices)
{
    numVertices = vertices;
    adjList = new list<int>[numVertices];
    visited = new bool[numVertices];
    for (int i = 0; i < numVertices; i++)
    {
        visited[i] = false;
    }
}

void Graph::add_edge(int src, int dst)
{
    adjList[src].push_back(dst);
    adjList[dst].push_back(src);
}

void Graph::DFS(int vertex)
{

    visited[vertex] = true;
    cout << "Visited " << vertex << " ";

    list<int>::iterator i;

    for (i = adjList[vertex].begin(); i != adjList[vertex].end(); ++i)
    {
        if (!visited[*i])
        {
            DFS(*i);
        }
    }
}

int main()
{
    Graph g(6);
    g.add_edge(0, 4);
    g.add_edge(0, 1);
    g.add_edge(1, 4);
    g.add_edge(1, 2);

    g.add_edge(2, 3);
    g.add_edge(3, 4);
    g.add_edge(3, 5);

    g.DFS(4);

    return 0;
}