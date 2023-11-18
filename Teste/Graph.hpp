#include "Vertice.hpp"
#include "Edge.h"
#include <map>
#include <set>
#include <vector>

class Graph
{
private:
    std::map<Vertice, vector<Edge>> graph;
    std::set<Vertice> list;

public:
    Graph();
    // Graph(std::map<Vertice, Edge> graph);
    // Graph(Vertice V, Edge E);
    // Graph(Vertice V, std::string destinantion, float weight);
    ~Graph();
    std::map<Vertice, vector<Edge>> getMap();
    std::set<Vertice> getVertices();
    void addEdge(Vertice V, std::string Destination, float weight = 0);
    void setVecEdge(Vertice V, vector<Edge> E);
    void printVertices();

    friend std::ostream &operator<<(std::ostream &os, const Graph &g)
    {
        std::stringstream ss;
        for (auto it = g.graph.begin(); it != g.graph.end(); ++it)
        {
            os << it->first << "-";
            for (auto it2 = it->second.begin(); it2 != it->second.end(); it2++)
                os << *it2 << "\n";
            os << "\n";
        }
        return os;
    }
    std::string leitura(std::string filename);
};
