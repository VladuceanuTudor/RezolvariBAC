#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//ESTE FACUTA IN 2 MODURI:

//void putere(int n, int& x, int& p)
//{
//    int i;
//    for (i = 2; i <= n; i++)
//    {
//        int a = i;
//        p = 1;
//        while (a < n)
//        {
//            a = a * i;
//            p++;
//        }
//        if (a == n)
//        {
//            x = i;
//            break;
//        }
//    }
//
//}

//void putere(int n, int& x, int& p) {
//    for (int i = 2; i <= n; i++) {
//        p = 0;
//        int cop_n=n;
//        while (cop_n % i == 0) {
//            cop_n = cop_n / i;
//            p++;
//        }
//        if (cop_n == 1) {
//            x = i;
//            return;
//        }
//    }
//}

int main() {
    int n, x, p;
    cin >> n;
    putere(n, x, p);
    cout << x << " " << p;
}