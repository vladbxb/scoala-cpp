#include <iostream>
#include <fstream>

using namespace std;

bool adi[101][101];

int main() {
	ifstream fin("listavecini.in", ios::in);

	int n, x, y, nr=0;
	fin >> n;
	fin >> x >> y;

	while (!fin.eof()) {
		adi[x][y] = adi[y][x] = true;
		fin >> x >> y;
	}

	fin.close();

	int v[n + 1];

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			if (adi[i][j]) {
				nr++;
			}
		}
		v[i] = nr;
		nr = 0;
	}

	ofstream fout("listavecini.out", ios::out);

	for (int i=1; i<=n; i++) {
		fout << v[i] << " ";
		for (int j=1; j<=n; j++) {
			if (adi[i][j]) {
				fout << j << " ";
			}
		}
		fout << endl;
	}

	fout.close();
	return 0;
}
