#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
	int x, aux, exista;
	exista = 0;
	while (fin >> x)
	{
		aux = x;
		while (x && !(x % 2)) x /= 2;
		if (x == 1)
		{
			cout << aux << ' ';
			if (!exista) exista = 1;
		}
	}
	fin.close();
	if (!exista) cout << "nu exista";
	return 0;
}
