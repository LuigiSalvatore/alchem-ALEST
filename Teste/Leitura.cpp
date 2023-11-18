#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include "Graph.hpp"

using namespace std;

string leitura(string filename)
{
    ifstream file;
    string NEWLINE = "\n";
    file.open(filename);
    string line, v, w;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, v, ' ');
            getline(ss, w, ' ');
        }
        file.close();
    }
    return "v: ", v, ";\tw: ", w, NEWLINE;
}

string leituraTeste(string filename)
{
    ifstream file;
    string NEWLINE = "\n";
    file.open(filename);
    string line, weight, nodo, nodoI, nodoF;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, weight, ' ');
            if (weight == "->")
                getline(ss, weight, ' ');
            getline(ss, nodo, ' ');
                }
        file.close();
    }
    return NEWLINE;
}

string leitura2(string filename)
{
    ifstream file;
    string NEWLINE = "\n";
    file.open(filename);
    string line, v, w;
    Graph graph();
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            string weight, weight2;
            string nodo_ini;
            string nodo_fim;
            while (true)
            {
                getline(ss, weight, ' ');
                if (weight == "->")
                    break;
                getline(ss, nodo_ini, ' ');

                /*
                 *if nodo_ini se repetir, adiciona mais um edge a ele;
                 */
                // adicionar weight e nodo_ini pro grafo, tem um edge dirigido entre eles.
            }
            getline(ss, weight2, ' ');
            getline(ss, nodo_fim, ' ');
        }

        file.close();
    }
    return "v: ", v, ";\tw: ", w, NEWLINE;
}
