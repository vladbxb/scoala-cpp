// program adaptabil pentru a folosi metoda backtracking pe orice sir de structuri de date


#include <iostream>
#include <fstream>

using namespace std;
// ne alegem un vector de solutii cu care sa ne jucam ca sa afisam elementele dorite
int n, sol[1000];

// functie pentru a afisa solutia respectiva

void afisare()
{
    for (int i = 0; i < n; ++i)
	if (sol[i]) {
            cout << sol[i] << " ";
	}
    cout << endl;
}

// verificare cifre non repetandu-se, regula a permutarilor (implementarea lui bogdan)
/*
bool verif(int poz)
{
    for (int i = 0; i < poz; ++i)
        if (sol[i] == sol[poz])
            return false;
    return true;
}
*/

// functie care aplica metoda backtracking in adancime. adancimea este reprezentata de colectia de numere din vectorul solutie care este modificata.
// poz reprezinta indicele vectorului solutie (adica adancimea) pana la care algoritmul isi efectueaza schimbarile

void bkt(int poz)
{
    // n in cazul asta este numarul de elemente permis pe solutie, pentru ca in momentul in care poz se intalneste cu n, algoritmul trece la urmatoarea solutie
    if (poz == n) {
        afisare();
        return;
    }
    // pentru a fi adaptat pentru cifre, ne putem juca cu variabila i ca practic sa generam indicii vectorului solutie pe care ii vrem (caz care se aplica la orice alta structura de date) 
    for (int i = 0; i <= n; ++i) {
        sol[poz] = i;
	// daca aplicam niste conditii, putem din nou sa schimbam modul in care algoritmul genereaza solutiile, in cazul de mai sus pentru permutari
        // if( verif( poz ) )

	// aici se intampla o magie neagra, in care trecem la urmatorul indice al vectorului solutie (prin poz + 1) adica la urmatorul nivel de adancime,
	// si totusi ne folosim si de un for si de recursivitate, pentru ca cazul in care poz == n este defapt un base case,
	// si per solutie trebuie sa trecem prin numarul dorit de elemente, nu? deci aplicam acelasi lucru pe urmatorul indice al vectorului solutie,
	// faza e ca in momentul in care o solutie este afisata, se inchide apelul de la functie, si pentru ca for loop ul continua pe urmatoarele elemente
	// ale fiecarei solutii, se genereaza garantat fiecare solutie posibila
        bkt( poz + 1 );
    }
}

int main() {
    cin >> n;
    // apelam backtracking de la primul nivel de adancime, adica de la primul element al vectorului solutie
    bkt(0);
    return 0;
}
