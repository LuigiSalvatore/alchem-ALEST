#include <string>
#include <sstream>

#ifndef EWGRAPH_EDGE_H
#define EWGRAPH_EDGE_H
using namespace std;

struct Edge
{
  string v;
  string w;
  float weight;
  Edge(string v, string w, float weight)
  {
    this->v = v;
    this->w = w;
    this->weight = weight;
  }

  friend ostream &operator<<(ostream &os, const Edge &obj)
  {
    return os << obj.v << "-" << obj.w << " (" << obj.weight << ")";
  }
};

#endif
