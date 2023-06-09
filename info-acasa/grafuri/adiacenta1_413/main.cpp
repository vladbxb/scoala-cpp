#include <iostream>
#include <fstream>

using namespace std;

bool adi[101][101];

int main() {
	int n=0, x, y;
	ifstream fin("adiacenta1.in", ios::in);
	fin >> x >> y;

	while (!fin.eof()) {
		if (x > n) {
			n = x;
		}
		if (y > n) {
			n = y;
		}
		adi[x-1][y-1] = adi[y-1][x-1] = true;
		fin >> x >> y;
	}

	fin.close();

	ofstream fout("adiacenta1.out", ios::out);
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			fout << adi[i][j] << " ";
		}
		fout << endl;
	}

	fout.close();

	return 0;
}
