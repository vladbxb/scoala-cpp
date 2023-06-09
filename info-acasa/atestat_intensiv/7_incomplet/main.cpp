#include <iostream>
#include <fstream>

using namespace std;

// nu inteleg ce vrea de la mine functia asta
void elimColoana(int &n, int a[21][21], int k) {
	int noulIndexc = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j != k) {
				a[i][noulIndexc] = a[i][j];
				noulIndexc++;
			}
		}
	}
	n = noulIndexc;
}

int cifreImpare(int x) {
	bool par = false;
	int placeholder = x;
	while (placeholder > 0) {
		if ((placeholder % 10) % 2 == 0) {
			par = true;
		}
	}
	return !par;
}

int main() {
	ifstream fin("atestat.in", ios::in);
	int a[21][21];
	int placeholder = 1;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			a[i][j] = placeholder;
			placeholder++;
		}
	}
	int n = 2;
	elimColoana(n, a, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
