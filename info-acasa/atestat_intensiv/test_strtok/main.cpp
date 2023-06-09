#include <iostream>
#include <cstring>

using namespace std;

void strupr(char *s) {
	for (int i=0; s[i] != '\0'; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 'a' - 'A';
		}
	}
}

int main() {
	char s[256];
	int k, lungime;
	cin.getline(s, 256);
	cin >> k;
	strupr(s);
	char *p = strtok(s, " ");
	while (p != NULL) {
		lungime = strlen(p);
		if (lungime % k == 0) {
			cout << p << " ";
		}	
		p = strtok(NULL, " ");
	}
	return 0;
}
