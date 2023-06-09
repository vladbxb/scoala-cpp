#include <iostream>
#include <fstream>

using namespace std;

bool graf[101][101];
int v[101];

int main() {
	int n, x, y, grad = 0, gradmax = 0, nr = 0;
	ifstream fin("gradmax.in", ios::in);
	
	fin >> n >> x >> y;

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
		if (grad > gradmax) {
			gradmax = grad;
		}
		v[i] = grad;
		grad = 0;
	}
	for (int i=0; i<n; i++) {
		if (v[i] == gradmax) {
			nr++;
		}
	}
	ofstream fout("gradmax.out", ios::out);
	fout << nr << " ";
	for (int i=0; i<n; i++) {
		if (v[i] == gradmax) {
			fout << i + 1 << " ";
		}
	}
	fout.close();

	return 0;
}

