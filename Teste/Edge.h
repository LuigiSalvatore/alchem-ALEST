#include <string>
#include <sstream>

#ifndef EWGRAPH_EDGE_H
#define EWGRAPH_EDGE_H

struct Edge
{
  std::string Destination;
  float weight;
  Edge(std::string Destination, float weight)
  {
    this->Destination = Destination;
    this->weight = weight;
  }

  friend std::ostream &operator<<(std::ostream &os, const Edge &obj)
  {
    return os << obj.Destination << " (" << obj.weight << ")";
  }
};
Edge toEdge(std::string Destination, float weight)
{
  // Edge e(Destination, weight);
  return Edge(Destination, weight);
}
#endif
