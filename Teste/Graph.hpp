#include "Vertice.hpp"
#include "Edge.h"
#include <map>
#include <set>
#include <vector>

class Graph
{
private:
    std::map<std::string, std::vector<Edge>> graph;
    std::set<std::string> list;

public:
    Graph();
    ~Graph();
    std::map<std::string, std::vector<Edge>> getMap();
    std::set<std::string> getVertices();
    void addEdge(std::string V, std::string Destination, float weight = 0);
    void setVecEdge(std::string V, std::vector<Edge> E);
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
    void addToList(std::string V, std::string Destination, float weight = 0);
    void leitura(std::string filename);
    int hidrogenPrice(std::string vertice, int hidrogenio = 0);
};
