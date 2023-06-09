#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int n,m,x,y;
	ifstream fin("adiacenta.in", ios::in);
	fin >> n >> m;
	bool adi[n][n];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			adi[i][j] = false;
		}
	}
	fin >> x >> y;
	while (!fin.eof()) {
		adi[x-1][y-1] = adi[y-1][x-1] = true;
		fin >> x >> y;
	}
	fin.close();
	ofstream fout("adiacenta.out", ios::out);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			fout << adi[i][j] << " ";
		}
		fout << endl;
	}
	fout.close();
	return 0;
}
