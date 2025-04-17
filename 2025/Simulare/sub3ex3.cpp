#include <iostream>
#include <fstream>

using namespace std;

int v[100];

int main(){
ifstream fin("BAC.TXT");
int x, np, nc, ok = 0;
fin >> np >> nc;
for (int i = 1;i <= np;i++)
{
	fin >> x;
	if (x > 99)
		x = x / 10;
	v[x]++;
	
		
}
for (int i = 1;i <= nc;i++)
{
	fin >> x;
	if (x > 99)
		x = x / 10;
	if (v[x] > 0 || v[x / 10 + x % 10 * 10] > 0)
	{
		ok = 1;
		break;
	}
}
if (ok == 1)
	cout << "DA";
else
	cout << "NU";
return 0;
}