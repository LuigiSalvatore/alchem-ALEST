#include "Graph.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#define DEBUG

using namespace std;
Graph::~Graph()
{
}

Graph::Graph()
{
}

std::map<Vertice, vector<Edge>> Graph::getMap()
{
    return graph;
}

std::set<Vertice> Graph::getVertices()
{
    return list;
}

void Graph::addEdge(Vertice V, std::string Destination, float weight)
{
    graph[V].push_back(toEdge(Destination, weight));
    list.insert(V);
}

void Graph::setVecEdge(Vertice V, vector<Edge> E)
{
    graph[V] = E;
    list.insert(V);
}

void Graph::printVertices()
{
    std::stringstream ss;
    int i = 1;
    for (auto it = list.begin(); it != list.end(); it++, i++)
        ss << i << "- " << &it;
    ss << "\n";
    std::cout << ss.str() << std::endl;
}

vector<string> Graph::split(string filename)
{
    ifstream file;
    string NEWLINE = "\n";
    file.open(filename);
    string line, weight, nodo, nodoI, nodoF, lixo, str1, str2;
    vector<Edge> alchem;
    vector<string> aux;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);

            while (getline(ss, str1, ' '))
            {
                aux.push_back(str1);
            }
        }
        file.close();
        // for (auto it = aux.begin(); it < aux.end(); it++)
        //     cout << *it << "\t";
        // cout << endl;
    }
    return aux;
}

void Graph::algorithm(std::vector<string> vec)
{
    int flag = 0;
    for (int i = 0; i < vec.size() - 2; i + 2)
    {
        addEdge()
            list.insert(vec[i + 1]);
    }
}
