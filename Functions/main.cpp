/*

N�r programmet v�r startet beygnner pcen alltid
p� samme sted, og det er definert som main funksjonen.

Den m� v�re p� en av f�lgende formater:
int main(void);
int main();

int main(int argc, char **argv);
int main(int argc, char *argv[]);
int main(int argc, char **argv, char **env);

// more specifically in C
// NOT according to the ISO C standard 5.1.2.2.1
// BUT in embedded programming depending on the �C, this form is also used
void main (void);

og kun for mac:
int main(int argc, char **argv, char **envp, char **apple);

Vi bruker som oftest kun 
int main();
eller 
int main(int argc, char **argv);

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
Funk 1 kj�rte
Funk 2 kj�rte

S� lenge vi ikke kaller p� funkTre fra main, 
s� vil den koden aldri kj�re!

HUSK:
For at kode skal kj�re s� m� den direkte eller indirekte 
bli kalt fra main!
*/