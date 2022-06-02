#include <iostream>
using namespace std;

class Graph
{
private:
    int nodes;
    int **adjMatrix;

public:
    Graph(int node)
    {
        this->nodes = node;
        this->adjMatrix = new int *[node];
        int i, j;
        for (i = 0; i < node; i++)
        {
            adjMatrix[i] = new int[node];
            for (j = 0; j < node; j++)
                adjMatrix[i][j] = 0;
        }
    }
    void add_edge(int origin, int dest)
    {
        if (origin < 0 || dest < 0 || origin >= nodes || dest >= nodes)
        {
            cout << "Invalid operation";
            return;
        }
        this->adjMatrix[origin][dest] = 1;
        this->adjMatrix[dest][origin] = 1;
    }
    void remove_edge(int origin, int dest)
    {
        if (origin < 0 || dest < 0 || origin >= nodes || dest >= nodes)
        {
            cout << "Invalid operation";
            return;
        }
        this->adjMatrix[origin][dest] = 0;
        this->adjMatrix[dest][origin] = 0;
    }
    void display()
    {
        int i, j;
        for (i = 0; i < nodes; i++)
        {
            for (j = 0; j < nodes; j++)
                cout << adjMatrix[i][j] << " ";
            cout << "\n";
        }
    }
};

int main()
{
    Graph g(7);
    g.add_edge(1, 4);
    g.add_edge(0, 1);
    g.add_edge(6, 3);
    g.add_edge(9, 2);
    g.remove_edge(0, 1);
    g.remove_edge(3, 10);
    g.add_edge(6, 0);
    cout << "\n";
    g.display();
}