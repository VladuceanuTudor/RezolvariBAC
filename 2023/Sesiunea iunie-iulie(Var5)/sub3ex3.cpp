#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;

int Vp[100], Vs[100];

int main() {
    ifstream fin("bac.txt");

    int x, nr=0;
    while (fin >> x) {
        if (x >= 100) {
            Vs[x % 100]++; //am bagat sufixul

            if (x >= 1000) { //pt 4 cifre
                Vp[x / 100]++;
            }
            else {          //pt 3 cifre
                Vp[x / 10]++;
            }
        }
    }
    
    for (int i = 10; i <= 99; i++) {
        if (Vs[i] == Vp[i] && Vs[i] != 0)
            nr++;
    }
    cout << nr;

    fin.close();
    return 0;
}