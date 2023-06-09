#include <iostream>
#include <fstream>

using namespace std;

bool graf[101][101];
bool v[101];

int main() {
	int n, k, x, y, gradk=0, grad=0, nr=0;
	ifstream fin("gradek.in", ios::in);
	fin >> n >> k;
	fin >> x >> y;

	while (!fin.eof()) {
		graf[x-1][y-1] = graf[y-1][x-1] = true;
		fin >> x >> y;
	}

	fin.close();

	for (int i=0; i<n; i++) {
		if (graf[k-1][i]) {
			gradk++;
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (graf[i][j]) {
				grad++;
			}
		}
		if (grad == gradk) {
			v[i] = true;
			nr++;
		}
		grad = 0;
	}

	ofstream fout("gradek.out", ios::out);

	fout << nr << endl;
	for (int i=0; i<n; i++) {
		if (v[i]) {
			fout << i + 1 << " ";
		}
	}

	fout.close();

	return 0;
}
