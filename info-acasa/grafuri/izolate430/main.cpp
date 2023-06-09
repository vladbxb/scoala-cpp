#include <iostream>
#include <fstream>

using namespace std;

bool graf[101][101];
bool v[101];

int main() {
	int n, x, y, nr = 0;
	bool izo = true;
	ifstream fin("izolate.in", ios::in);
	fin >> n;
	fin >> x >> y;

	while (!fin.eof()) {
		graf[x-1][y-1] = graf[y-1][x-1] = true;
		fin >> x >> y;
	}

	fin.close();

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (graf[i][j]) {
				izo = false;
			}
		}
		if (izo) {
			v[i] = true;
			nr++;
		}
		izo = true;
	}

	ofstream fout("izolate.out", ios::out);

	fout << nr << " ";
	for (int i=0; i<n; i++) {
		if (v[i]) {
			fout << i + 1 << " ";
		}
	}

	fout.close();
	return 0;
}
