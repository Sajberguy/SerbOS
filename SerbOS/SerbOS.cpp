#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	string jed, dva, tri, cet;
	double a, b, c, d;
	char op;
	cout << "Dobrodosli!" << endl << "Upisite vase Ime:" << endl;
	cin >> dva;
	cout << "Upisite dati kod za ulazak u OS:" << endl;
	cin >> tri;
	if (tri == "1389") {
		cout << "Dobrodosli u SerbOS, ovo su najvaznije komande:" << endl << "AllApps(prikazuje listu svih aplikacija)" << endl << "Kalkulator(prikazuje osnovni kalkulator)" << endl << "KalkulatorN(prikazuje napredni kalkulator)" << endl << "Novo(prikazuje vijesti i novosti)" << endl << "Info(prikazuje informacije o sistemu)" << endl << "Quit(zatvaranje OS)" << endl;

		bool running = true;
		while (running) {
			cin >> cet;
			if (cet == "AllApps") {
				cout << "Lista svih aplikacija:" << endl << "Kalkulator" << endl << "KalkulatorN" << endl << "Vijesti(Novosti)" << endl;
			}
			else if (cet == "Kalkulator") {
				cout << "Unesite prvi broj:" << endl;
				cin >> a;
				cout << "Unesite drugi broj:" << endl;
				cin >> b;
				cout << "Rezultat dva broja je:" << a + b << endl;
			}
			else if (cet == "KalkulatorN") {
				cout << "Unesite dva broja i aritmeticku operaciju operaciju:" << endl;
				cin >> c >> op >> d;
				if (op == '+') {
					cout << "Rezultat aritmeticke operacije je:" << c + d << endl;
				}
				else if (op == '-') {
					cout << "Rezultat aritmeticke operacije je:" << c - d << endl;
				}
				else if (op == '*') {
					cout << "Rezultat aritmeticke operacije je:" << c * d << endl;
				}
				else if (op == '/') {
					cout << "Rezultat aritmeticke operacije je:" << c / d << endl;
				}
			}
			else if (cet == "Novo") {
				cout << "**Novosti**" << endl << "*Vrijeme*" << endl << "Kod mene trenutno pada kisa." << endl << "*Skola se uskoro zavrsava*" << endl << "Uskoro pocinje ljetnji raspust za ucenike osnovnih i srednjih skola." << endl;
			}
			else if (cet == "Info") {
				cout << "Informacije o sistemu:" << endl << "Vase ime:" << dva << endl << "Verzija sistema:0.1" << endl << "Datum pravljenja sistema:17/5/2026" << endl << "Datum pravljenja verzije:17/5/2026" << endl << "Sistem napravio:SajberGuy" << endl;
			}
			else if (cet == "Quit") {
				running = false;
			}
			
			}

		}
	else {
		cout << "Pogresan kod" << endl;
		return 0;
	}
}