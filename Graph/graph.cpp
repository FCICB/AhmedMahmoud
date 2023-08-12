//
// Created by ahmed on 12/08/23.
//

#include "graph.h"
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
graph::graph(int vertices) : numVertices(vertices), adjList(vertices) {};
void graph::addEdge(int v1, int v2) {
    adjList[v1].push_back(v2);
    adjList[v2].push_back(v1); // For undirected graph
}
void graph::removeEdge(int v1,int v2)
{
    adjList[v1].remove(v2);
    adjList[v2].remove(v1);
}
bool graph::isConnected(int v1,int v2)
{
    for(int vertex : adjList[v1])
        if(vertex==v2)
            return true;
    return false;
}
void graph::printGraph() {
    for (int i = 0; i < numVertices; ++i) {
        cout << "Vertex " << i << ": ";
        for (int vertex : adjList[i]) {
            cout << vertex << " ";
        }
        cout << endl;
    }
}
void graph::bfs(int startVertex) {
    vector<bool> visited(numVertices, false);
    queue<int> q;

    visited[startVertex] = true;
    q.push(startVertex);

    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        cout << vertex << " ";
        for (int neighbor : adjList[vertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}
void graph::dfs(int startVertex) {
    vector<bool> visited(numVertices, false);
    stack<int> s;

    s.push(startVertex);

    while (!s.empty()) {
        int vertex = s.top();
        s.pop();
        if (!visited[vertex]) {
            visited[vertex] = true;
            cout << vertex << " ";
            for (int neighbor : adjList[vertex]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
    }
}
