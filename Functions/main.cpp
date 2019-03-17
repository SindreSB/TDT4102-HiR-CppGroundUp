/*

N�r programmet v�r startet beygnner pcen alltid
p� samme sted, og det er definert som main funksjonen.

Den m� v�re p� en av f�lgende formater:
int main();
int main(int argc, char **argv);

int main(void);
int main(int argc, char *argv[]);
int main(int argc, char **argv, char **env);
void main (void); // Brukes gjerne for embedded
int main(int argc, char **argv, char **envp, char **apple); // Kun for mac

Vi bruker som oftest kun 
int main();

*/
#include <iostream>
using namespace std;

//Lag noen funksjoner
void funkEn() {
	cout << "Funk 1 kj�rte" << endl;
}
void funkTo() {
	cout << "Funk 2 kj�rte" << endl;
}
void funkTre() {
	cout << "Funk 3 kj�rte" << endl;
}

// Koden v�r begynner her
int main() {
	funkEn();
	funkTo();

	return 0;
}

/*
Output:
Funk 1 kj�rte
Funk 2 kj�rte

S� lenge vi ikke kaller p� funkTre fra main, 
s� vil den koden aldri kj�re!

HUSK:
For at kode skal kj�re/bli utf�rt s� m� den direkte eller indirekte 
bli kalt fra main!
*/