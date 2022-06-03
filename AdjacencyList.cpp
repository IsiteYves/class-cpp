#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class AdjacencyList
{
private:
    int nodes;
    vector<int> *adjList;

public:
    AdjacencyList(int nodes)
    {
        this->nodes = nodes;
        adjList = new vector<int>[nodes];
    }

    void display()
    {
        for (int i = 0; i < nodes; i++)
        {
            cout << "Node " << i << ": ";
            for (auto adjNode : adjList[i])
                cout << " -> " << adjNode;
            cout << endl;
        }
    }
    void add_edge(int origin, int destination)
    {
        adjList[origin].push_back(destination);
        adjList[destination].push_back(origin);
    }
    void del_edge(int origin, int destination)
    {
        for (int i = 0; i < adjList[origin].size(); i++)
        {
            if (adjList[origin][i] == destination)
            {
                adjList[origin].erase(adjList[origin].begin() + i);
                break;
            }
        }
        for (int i = 0; i < adjList[destination].size(); i++)
        {
            if (adjList[destination][i] == origin)
            {
                adjList[destination].erase(adjList[destination].begin() + i);
                break;
            }
        }
    }
};
int main()
{
    int vertices = 5;
    AdjacencyList adjList(vertices);
    adjList.add_edge(0, 1);
    adjList.add_edge(0, 2);
    adjList.add_edge(1, 3);
    adjList.add_edge(1, 2);
    adjList.del_edge(0, 1);
    adjList.display();
}