#include "Graph.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
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

string Graph::leitura(string filename)
{
    ifstream file;
    string NEWLINE = "\n";
    file.open(filename);
    string line, weight, weight2, nodo, nodoI, nodoF;
    vector<Edge> alchem;
    if (file.is_open())
    {
#ifdef DEBUG
        cout << "File opened" << endl;
#endif
        while (getline(file, line))
        {
            stringstream ss(line);
            while (true)
            {
                getline(ss, weight, ' ');
                if (weight == "->")
                {
                    getline(ss, weight2, ' ');
                    getline(ss, nodoI, ' ');
#ifdef DEBUG
                    cout << "weight: " << weight << " ";
                    cout << "nodoI: " << nodoI << endl;
#endif
                    this->setVecEdge(nodoI, alchem);
                    break;
                }
                getline(ss, nodoF, ' ');
                alchem.push_back(toEdge(nodoF, stof(weight)));
#ifdef DEBUG
                cout << "weight: " << weight << "\t";
                cout << "nodoF: " << nodoF << endl;
#endif
            }
        }
        file.close();
    }
    return "Done Reading...\n";
}