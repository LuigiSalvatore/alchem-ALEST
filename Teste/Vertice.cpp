#include "Vertice.hpp"

Vertice::Vertice(std::string Nome) { this->Nome = Nome; }
Vertice::~Vertice() {}
std::string Vertice::getName() { return Nome; }
void Vertice::setName(std::string Nome) { this->Nome = Nome; }

std::ostream &operator<<(std::ostream &os, const Vertice &vert) { return os << vert.Nome; }
bool operator<(const Vertice &l, const Vertice &r) { return l.Nome < r.Nome; }
