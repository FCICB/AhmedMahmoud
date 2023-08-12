#include <iostream>
#include "graph.h"

using namespace std;


int main() {
    graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    graph.printGraph();
    cout<<"After Remove"<<endl;
    graph.removeEdge(0, 1);
    graph.removeEdge(0, 2);
    graph.printGraph();
    cout<<"BFS"<<endl;
    graph.bfs(1);
    cout<<"\nDFS"<<endl;
    graph.dfs(1);
    return 0;
}
