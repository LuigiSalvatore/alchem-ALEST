#include <map>
#include <set>
#include <string>
#include <vector>

#include "edge.h"

#ifndef WD_H
#define WD_H

class WeightedDigraph
{
public:
    WeightedDigraph();
    WeightedDigraph(std::string filename);

    std::vector<Edge> getAdj(std::string v);
    std::set<std::string> getVerts();

    void addEdge(std::string v, std::string w, float weight);

    std::string toDot();

protected:
    void addToList(std::string v, Edge e);
    std::set<std::string> vertices;

private:
    std::map<std::string, std::vector<Edge>> graph;
};

#endif
