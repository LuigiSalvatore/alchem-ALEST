#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include "edge.h"

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
            // addEdge(v, w);
        }
        file.close();
    }
    return "v: ", v, ";\tw: ", w, NEWLINE;
}
string leitura2(string filename)
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
            Edge edge();
            string lixo;
            string weight;
            string nodo_ini;
            string nodo_fim;
            vector<map<float, string>> vec;
            /* vector de um mapa; map do elemento e seus edges;*/
            vector<map<string, vector<Edge>>> graph;
            while (true)
            {
                getline(ss, weight, ' ');
                if (weight == "->")
                    break;
                getline(ss, nodo_ini, ' ');
            }
            getline(ss, lixo, ' ');
        }
        file.close();
    }
    return "v: ", v, ";\tw: ", w, NEWLINE;
}
