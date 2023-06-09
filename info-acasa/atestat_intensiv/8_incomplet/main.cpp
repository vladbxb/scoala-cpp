#include <iostream>
#include <fstream>

using namespace std;

bool inftr(double a[20][20], int n) {
	bool corect = true;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (j > i && a[i][j] != 0) {
				corect = false;
			}
		}
	}
	return corect;
}

//nu stiu sa fac functia asta recursiv

double produs(double a[20][20], int n) {
	if (n == 0) {
        return a[0][0];
	}
	return a[n][n] * produs(a[n-1][n-1], n-1);
}

int main() {
	ifstream fin("atestat.in", ios::in);
	ofstream fout("atestat.out", ios::out);
	int marime;
	double a[20][20];
	fin >> marime;
	for (int i=0; i<marime; i++) {
		for (int j=0; j<marime; j++) {
			fin >> a[i][j];
		}
	}
	if (inftr(a, marime)) {
		fout << "da" << endl;
		fout << produs(a, marime);
	} else {
		fout << "nu" << endl;
		fout << "nedeterminat";
	}

	return 0;
}
