#include <string>
#ifndef VERTICE_HPP
#define VERTICE_HPP

class Vertice
{
private:
    std::string Nome;

public:
    Vertice(std::string Nome = nullptr);
    ~Vertice();
    std::string getName();
    void setName(std::string Nome);
    friend std::ostream &operator<<(std::ostream &os, const Vertice &vert)
    {
        return os << vert.Nome;
    }
};

#endif