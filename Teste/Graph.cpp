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

std::map<std::string, vector<Edge>> Graph::getMap()
{
    return graph;
}

std::set<std::string> Graph::getVertices()
{
    return list;
}

void Graph::addEdge(std::string V, std::string Destination, float weight)
{
    graph[V].push_back(toEdge(Destination, weight));
    list.insert(V);
}

void Graph::setVecEdge(std::string V, vector<Edge> E)
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

void Graph::addToList(string vertice, string destination, float weight)
{
    vector<Edge> &list = graph[vertice];
    list.push_back(toEdge(destination, weight));
}

void Graph::leitura(string filename)
{
    ifstream arq;
    string line;
    arq.open(filename);

    stringstream output;
    string weight, catalizador, begin, end;

    map<string, vector<pair<string, int>>> elements;

    if (arq.is_open())
    {
        while (getline(arq, line))
        {
            size_t pos = line.find("->");

            if (pos != string::npos)
            {
                istringstream iss(line.substr(0, pos));

                while (iss >> weight >> catalizador)
                {
                    output << catalizador << line.substr(pos + 4) << " " << weight << endl;
                    graph[catalizador].push_back(toEdge(line.substr(pos + 4), stoi(weight)));
                }
            }
        }
    }
    return;
}