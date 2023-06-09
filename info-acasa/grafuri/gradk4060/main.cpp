#include <iostream>
#include <fstream>

using namespace std;

bool graf[101][101];

bool v[101];

int main() {
	int n, k, x, y, grad = 0, nr = 0;
	ifstream fin("gradk.in", ios::in);
	
	fin >> n >> k >> x >> y;

	while (!fin.eof()) {
		graf[x-1][y-1] = graf[y-1][x-1] = true;
		fin >> x >> y;
	}

	fin.close();
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (graf[i][j]) {
				grad++;
			}
		}
		if (grad == k) {
			nr++;
			v[i] = true;
		}
		grad = 0;
	}

	ofstream fout("gradk.out", ios::out);
	if (nr) {
		fout << nr << " ";

		for (int i=0; i<n; i++) {
			if (v[i]) {
				fout << i + 1 << " ";
			}
		}
	} else {
		fout << "NU EXISTA";
	}
	fout.close();

	return 0;
}
