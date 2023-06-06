#include "graphtype.h"
#include <iostream>
#include "heaptype.cpp"

using namespace std;

int main()
{
    GraphType<char> Graph;
    Graph.AddVertex('A');
    Graph.AddVertex('B');
    Graph.AddVertex('C');
    Graph.AddVertex('D');
    Graph.AddVertex('E');
    Graph.AddVertex('F');
    Graph.AddVertex('G');
    Graph.AddVertex('H');

    Graph.AddEdge('A', 'B', 1);
    Graph.AddEdge('B', 'A', 1);
    Graph.AddEdge('A', 'C', 1);
    Graph.AddEdge('A', 'D', 1);
    Graph.AddEdge('D', 'A', 1);
    Graph.AddEdge('D', 'E', 1);
    Graph.AddEdge('D', 'G', 1);
    Graph.AddEdge('H', 'E', 1);
    Graph.AddEdge('F', 'H', 1);
    Graph.AddEdge('G', 'F', 1);

    cout << Graph.OutDegree('D') << "\n";

    if (Graph.FoundEdge('A', 'D'))
        cout << "There is an Edge." << endl;
    else
        cout << "There is no Edge." << endl;

    if (Graph.FoundEdge('B', 'D'))
        cout << "There is an Edge." << endl;
    else
        cout << "There is no Edge." << endl;

    Graph.DepthFirstSearch('B', 'E');
    Graph.DepthFirstSearch('E', 'B');
    Graph.BreadthFirstSearch('B', 'E');
    Graph.BreadthFirstSearch('E', 'B');
    cout << Graph.BFS_to_find_length('B', 'E');
    return 0;
}
