//made by ME
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char m[100][100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	}

	int voc_u = 0;
	for (int i = 0; i < strlen(m[n - 1]); i++)
		if (strchr("aeiou", m[n - 1][i]))
			voc_u++;

	for (int i = 0; i < n - 1; i++) {
		int nrvoc = 0;
		for (int j = 0; j < strlen(m[i]); j++)
			if (strchr("aeiou", m[i][j]))
				nrvoc++;

		if (nrvoc == voc_u)
			cout << m[i] << " ";
	}

}