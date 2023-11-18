#include "Vertice.hpp"

Vertice::Vertice(std::string Nome)
{
    this->Nome = Nome;
}

Vertice::~Vertice()
{
}
std::string Vertice::getName()
{
    return Nome;
}

void Vertice::setName(std::string Nome)
{
    this->Nome = Nome;
}