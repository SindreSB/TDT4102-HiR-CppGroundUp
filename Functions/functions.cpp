/*

Når programmet vår startet beygnner pcen alltid
på samme sted, og det er definert som main funksjonen.

Den må være på en av følgende formater:
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

// Koden vår begynner her
int main() {
	

	return 0;
}

/*
Output:
Funk 1 kjørte
Funk 2 kjørte

Så lenge vi ikke kaller på funkTre fra main, 
så vil den koden aldri kjøre!

HUSK:
For at kode skal kjøre/bli utført så må den direkte eller indirekte 
bli kalt fra main!
*/