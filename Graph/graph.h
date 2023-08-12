//
// Created by ahmed on 12/08/23.
#include <list>
#include <vector>
#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H

using namespace std;
class graph {
private:
    int numVertices;
    vector<list<int>> adjList;
public:
    graph(int vertices);
    void addEdge(int v1, int v2);
    void removeEdge(int v1,int v2);
    bool isConnected(int v1,int v2);
    void printGraph();
    void bfs(int startVertex);
    void dfs(int startVertex);
    };


#endif //GRAPH_GRAPH_H
