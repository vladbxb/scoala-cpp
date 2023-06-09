#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int vocale(char prop[256]) {
	char vocale[] = "aeiou";
	int v=0;
	while (prop != NULL) {
		if (strchr(vocale, prop[0])) {
			v++;
		}
		prop++;
	}
	return v;
}

void cuvant(char prop[256], char cuv[256]) {
	char *c = strtok(prop, " ");
	strcpy(cuv, c);
	while (c != NULL) {
		if (strlen(cuv) < strlen(c)) {
			strcpy(cuv, c);
		}
		c = strtok(NULL, " ");
	}
}

int main() {
	ifstream fin("atestat.in", ios::in);
	int n;
	char prop[256], cuv[256]; 
	fin >> n;
	fin.getline(prop, 256);
	for (int i=0; i<=n; i++) {
		cout << prop;
		fin.getline(prop, 256);
		cuvant(prop, cuv);
		cout << cuv << endl;
		//strcat(rez, lung);
		//strcat(rez, " ");
	}
	//strcat(rez, "\0");
	//cout << rez;
	fin.close();
	return 0;
}
