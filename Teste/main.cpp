#include "Graph.hpp"
#include <iostream>
#include <chrono>

int COUNTER_OF_LOOPS = 0;

// file = casoteste.txt
// file = casoa5.txt
// file = casoa20.txt
// file = casoa40.txt
// file = casoa60.txt
// file = casoa80.txt
// file = casoa120.txt
// file = casoa240.txt
// file = casoa280.txt
// file = caso320.txt
// file = casoa360.txt
// file = casoa400.txt

using namespace std;
using namespace std::chrono;

int main(void)
{
    string files[] = {"casoteste.txt", "casoa5.txt", "casoa20.txt", "casoa40.txt", "casoa60.txt", "casoa80.txt", "casoa120.txt", "casoa240.txt", "casoa280.txt", "casoa320.txt", "casoa360.txt", "casoa400.txt"};

    for (int i = 0; i < sizeof(files) / sizeof(files[0]); i++)
    {
        auto start = high_resolution_clock::now();
        Graph graph;
        cout << "===========================================================================================" << endl;
        graph.leitura(files[i]);
        cout << "CASO " << files[i] << endl;
        cout << graph.hidrogenPrice("hidrogenio") << endl;
        cout << "===========================================================================================" << endl;
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);
        cout << "Time taken by function: "
             << duration.count() << " milliseconds" << endl;
        cout << "===========================================================================================" << endl;
        cout << "Times the function was called: " << COUNTER_OF_LOOPS << endl;
        cout << "===========================================================================================" << endl;
    }

    return 1;
}