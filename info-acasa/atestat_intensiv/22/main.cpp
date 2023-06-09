#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

struct punct
{
	float x,y;
};

float distanta(punct a, punct b) {
	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

float arie(punct a, punct b) {
	punct c;
	c.x = a.x;
	c.y = b.y;
	return distanta(a, c) * distanta(c, b);
}

int main() {
	ifstream fin("atestat.in", ios::in);
	int n, ordine1, ordine2;
	float ariemax=0, aria;
	fin >> n;
	punct a[n];
	for (int i=0; i<n; i++) {
		fin >> a[i].x >> a[i].y;
		// cout << a[i].x << " " << a[i].y << endl;
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			aria = arie(a[i], a[j]);
			if (ariemax < aria) {
				ariemax = aria;
				ordine1 = a[i].x;
				ordine2 = a[j].x;
			}
		}
	}
	cout << ariemax << " " << ordine1 << " " << ordine2;
	fin.close();
	return 0;
}
