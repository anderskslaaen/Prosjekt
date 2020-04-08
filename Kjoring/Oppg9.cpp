#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "LesData2.h"
using namespace std;

class Dato {
	private:
		int dag,
			maaned,
			aar;
	public:
		Dato() { dag = 1; maaned = 1;  aar = 2000; }
		Dato(int d, int m, int a) { dag = d; maaned = m; aar = a;}
		void lesData() {
			dag = lesInt("Dag: ", 1, 30);
			maaned = lesInt("Maaned: ", 1, 12);
			aar = lesInt("Aar: ", 2000, 2020);
		}
		void skrivData() {
			cout << "\n" << dag << "/" << maaned << "-" << aar;
		}
		bool sammeAar(const Dato dato) {
			return (aar == dato.aar);
		}
		bool sammeAarsdag(const Dato dato) {
			return (dag == dato.dag && maaned == dato.maaned);
		}
};

int main() {
	Dato dato1,
		dato2(29,07,2005);

	cout << "Les inn data om dato nr. 1\n";
	dato1.lesData();

	cout << "\nDato 1 er:\t"; dato1.skrivData();

	cout << "\nDato 2 er:\t"; dato2.skrivData();

	cout << "\n\nDatoene er " << ((!dato1.sammeAar(dato2)) ? "IKKE " : "")
	<< "samme året";

	cout << "\n\nDatoene er " << ((!dato1.sammeAarsdag(dato2)) ? "IKKE " : "")
		<< "samme dag i året";

}

