#include <iostream>

using namespace std;

struct Nod {
	int val;
	Nod *st, *dr;
};

void adaugare(Nod *n, int nr) {
	if (nr != NULL) {
		int x;
		n = new Nod;
		n->val = nr;
		n->st = NULL;
		n->dr = NULL;
		// n->st->val = 15;
		cout << "Stanga nodului " << nr << " este: ";
		cin >> x;
		adaugare(n -> st , x);
        	cout << "Dreapta nodului " << nr << "este: ";
		cin >> x;
        	adaugare(n -> dr , x);
    	}
}

void stergere(Nod *n) {
	if (n != NULL) {
		stergere(n -> st);
		stergere(n -> dr);
		delete n;
		n = NULL;
	}
}

Nod* cautare(Nod *n, int nr) {
	if (n->val == nr) {
		return n;
	}
	if (n->val != NULL) {
		cautare(n->st, nr);
		cautare(n->dr, nr);
	}
	return NULL;
}	

int main() {
	int nr;

	Nod *rad = NULL;
	Nod *test = NULL;

	cout << "Valoarea radacinii: ";
	cin >> nr;

	adaugare(rad, nr);
	stergere(rad);
	// test = cautare(rad, 2);
	return 0;
}
