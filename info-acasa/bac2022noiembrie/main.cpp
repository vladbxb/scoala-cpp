#include <iostream>
#include <cstring>

using namespace std;

void secventa(int &n) {
	int temp = n, badIndex=1;
	bool found = false;
	while (temp > 0) {
		if (!found && temp % 10 == 2) {
			found = true;
		} else if (found && temp % 10 == 2) {
			n -= 2 * badIndex / 10;
			found = false;
		}
		badIndex *= 10;
		temp /= 10;
	}
}

int main() {
	int n = 202233228;
	secventa(n);
	cout << n;
	return 0;
}
