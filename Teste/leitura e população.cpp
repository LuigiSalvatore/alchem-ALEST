#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <vector>
#include <queue>

using namespace std;

int main()
{

    ifstream arq;
    string line;
    arq.open("casoa5.txt");

    stringstream output;
    string number, word, begin, end;

    map<string, vector<pair<string, int>>> elements;

    if (arq.is_open())
    {
        while (getline(arq, line))
        {
            size_t pos = line.find("->");

            if (pos != string::npos)
            {
                istringstream iss(line.substr(0, pos));

                while (iss >> number >> word)
                {
                    output << word << line.substr(pos + 4) << " " << number << endl;
                    elements[word].push_back({line.substr(pos + 4), stoi(number)});
                }
            }
        }
    }

    for (const auto &element : elements)
    {
        cout << "Chave: " << element.first << endl;
        cout << "Valores associados:" << endl;

        for (const auto &pair : element.second)
        {
            cout << "   " << pair.first << ": " << pair.second << endl;
        }
    }

    return 0;
}