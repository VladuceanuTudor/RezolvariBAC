#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
    int m[100][100], n;

    cin >> n;

    for (int j = 1; j <= n; j++)
        cin >> m[1][j];

    for(int i = 2; i<=n; i++)
        for (int j = 1; j <= n; j++) {
            if (i+j<=n+1) {
                m[i][j] = (m[i - 1][j] + m[i - 1][j + 1]) % 100;
            }
            else {
                m[i][j] = -1;
            }
        }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}