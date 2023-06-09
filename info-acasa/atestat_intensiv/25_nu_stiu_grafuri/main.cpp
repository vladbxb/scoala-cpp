#include <iostream>
#include <fstream>

using namespace std;

void citire(int a[20][20], int n) {
	ifstream fin("atestat.in", ios::in);
	int inutil;
	fin >> inutil;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			fin >> a[i][j];
		}
	}
	fin.close();
}

int suma(int v[20], int k) {
	int rez=0;
	for (int i=0; i<n; i++) {
		rez += v[i];
	}
	return rez;
}

int main() {
	ifstream fin("atestat.in", ios::in);
	int n;
	fin >> n;
	int a[20][20];
	citire(a, n);

	fin.close();
	return 0;
}
