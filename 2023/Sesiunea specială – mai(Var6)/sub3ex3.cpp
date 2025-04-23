#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;


ifstream fin("bac.in");


int main() {
    int max_ant = INT_MIN, min_ant = INT_MAX, max= INT_MIN, min = INT_MAX, x, p=0, p_min=0, p_max;

    while (fin >> x) {
        p++;

        if (x > max)
            max = x;
        if (x < min)
            min = x;

        if (max == max_ant && min == min_ant && p_min == 0) {
            p_min = p;
        }

        if (max == max_ant && min == min_ant) {
            p_max = p;
        }

        max_ant = max;
        min_ant = min;
    }

    cout << p_min << " " << p_max;

}