#include <iostream>

using namespace std;

bool a[101][101];

bool verificare(bool a[101][101], int n) {
	for (int i=0; i<n; i++) {
		if (a[i][i]) {
			return false;
		}
		for (int j=0; j<n; j++) {
			if (a[i][j] != a[j][i]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> a[i][j];
		}
	}

	cout << verificare(a, n);

	return 0;
}
