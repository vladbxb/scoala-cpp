// Programul arata pe ecran primul si ultimul nume in ordine alfabetica dintr-o lista de nume.

#include <iostream>

using namespace std;

int main() {
	int n;
	// Utilizatorul scrie un numar n care reprezinta numarul de nume ale persoanelor pe care le va introduce in consola
	cin >> n;
	// Declaram variabile (locuri unde sa tina minte programul numele)
	string firstname, lastname, names[n];
	// Utilizatorul introduce n nume
	for (int i=0; i<n; i++) {
		cin >> names[i];
	}
	// Initializam variabilele ale primului si ultimului nume cu primele doua nume
	// care sunt garantate sa existe, ca sa avem cu ce sa le comparam (pentru a le compara alfabetic)
	firstname = names[0];
	lastname = names[1];
	// Parcurgem toata lista de nume
	for (int i=0; i<n; i++) {
		// Daca prima litera a numelui la care am ajuns este mai mica alfabetic decat
		// prima litera a numelui pe care l-am tinut minte ca fiind numele cel mai mic
		// dpdv alfabetic, atunci schimbam numele acela cu cel nou gasit care
		// este mai mic alfabetic
		if (names[i][0] < firstname[0]) {
			firstname = names[i];
		}
		// Daca prima litera a numelui la care am ajuns este mai mare din punct de vedere
		// alfabetic decat numele pe care l-am tinut minte ca fiind numele cel mai mare
		// dpdv alfabetic, atunci schimbam numele acela cu cel nou gasit
		// care este mai mare alfabetic
		if (names[i][0] > lastname[0]) {
			lastname = names[i];
		}
	}
	// Afisam numele pe ecran dupa cerinta
	cout << "Front of the line: " << firstname << endl;
	cout << "End of the line: " << lastname << endl;
	return 0;
}
