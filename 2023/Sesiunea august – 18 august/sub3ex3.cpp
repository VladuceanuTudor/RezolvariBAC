#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;

int V[100];
ifstream fin("date.in");

int main() {
    int x;
    int n, m, nr=0;

    fin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        fin >> x;
        V[x]++;
    }

    for (int i = 1; i <= n; i++)
    {
        fin >> x;
        if (V[x] > 0) {
            nr++;
            V[x]--;
        }
    }
    
    cout << nr;
    fin.close();
    return 0;
}