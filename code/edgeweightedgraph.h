#include <map>
#include <set>
#include <string>
#include <vector>

#include "edge.h"
using namespace std;

#ifndef EWGRAPH_H
#define EWGRAPH_H

class EdgeWeightedGraph
{
public:
  EdgeWeightedGraph();
  EdgeWeightedGraph(string filename);

  vector<Edge> getAdj(string v);
  set<string> getVerts();

  void addEdge(string v, string w, float weight);

  string toDot();

protected:
  void addToList(string v, Edge e);
  set<string> vertices;

private:
  map<string, vector<Edge>> graph;
};

#endif
