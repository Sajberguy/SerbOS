#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
int main() {
	string jed, tri, cet,pass,input;
	double a, b, c, d;
	char op;
	ifstream checkFile("user.dat");
	if (!checkFile || !(checkFile >> pass)) {
		cout << "Lozinka nije pronadjena, unesite novu:" << endl;
		cin >> pass;
		ofstream file("user.dat");
		file << pass;
		file.close();
		cout << "Lozinka stvorena!" << endl;
		cout << "Dobrodosli u SerbOS, ovo su najvaznije komande:" << endl << "AllApps(prikazuje listu svih aplikacija)" << endl << "Kalkulator(prikazuje osnovni kalkulator)" << endl << "KalkulatorN(prikazuje napredni kalkulator)" << endl;
	}
	else {
		checkFile.close();
		cout << "Unesite vasu lozinku:" << endl;
		cin >> input;
		if (input == pass) {
			cout << "Dobrodosli u SerbOS, ovo su najvaznije komande:" << endl << "AllApps(prikazuje listu svih aplikacija)" << endl << "Kalkulator(prikazuje osnovni kalkulator)" << endl << "KalkulatorN(prikazuje napredni kalkulator)" << endl;
		}
		else {
			cout << "Pogresna lozinka!";
			return 0;
		}
	}
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
				cout << "Informacije o sistemu:" << endl << "Verzija sistema:0.1" << endl << "Datum pravljenja sistema:17/5/2026" << endl << "Datum pravljenja verzije:17/5/2026" << endl << "Sistem napravio:SajberGuy" << endl;
			}
			else if (cet == "Quit") {
				running = false;
			}
			
			}

		}