#include <iostream>
#include <fstream>

using namespace std;

void nrElem1(int n, int v[31], int &s) {
	for (int i=0; i<n; i++) {
		if (v[i] == 0) {
			s++;
		}
	}
}

int suma(int n, int a[30][30]) {
	int rez=0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			rez += a[i][j];
		}
	}
	return rez;
}

int main() {
	ifstream fin("atestat.in", ios::in);

	fin.close();
	return 0;
}
