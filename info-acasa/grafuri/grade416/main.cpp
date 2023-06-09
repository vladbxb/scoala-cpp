#include <iostream>
#include <fstream>

using namespace std;

bool adi[101][101];

int main() {
	int n, x, y, grad=0;
	ifstream fin("grade.in", ios::in);
	fin >> n;

	fin >> x >> y;

	while (!fin.eof()) {
		adi[x-1][y-1] = adi[y-1][x-1] = true;
		fin >> x >> y;
	}
	
	fin.close();

	ofstream fout("grade.out", ios::out);

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (adi[i][j]) {
				grad++;
			}
		}
		fout << grad << " ";
		grad = 0;
	}

	fout.close();
	return 0;
}
