#include <iostream>

using namespace std;

int main() {
	int n, m, k, x, y, rez = 0;
	cin >> n >> m >> k;
	for (int i=0; i<m; i++) {
		cin >> x >> y;
		if (x % k != 0 && y % k != 0) {
			rez++;
		}
	}
	cout << rez;
	return 0;
}
