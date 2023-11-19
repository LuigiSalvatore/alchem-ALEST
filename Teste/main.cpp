#include "Graph.hpp"
#include <iostream>

using namespace std;

int main(void)
{
    Graph g;
    g.leitura("casoa5.txt");
    cout << g << endl;
    return 1;
}