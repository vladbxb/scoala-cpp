#include <iostream>
#include <fstream>

using namespace std;

void citire(int a[21][21], int n) {
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

int main() {
	ifstream fin("atestat.in", ios::in);
	int n;
	fin >> n;
	int a[21][21];
	citire(a, n);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	fin.close();
	return 0;
}
