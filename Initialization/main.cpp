#include <string>
#include <iostream>
using namespace std;

// Vi lager oss igjen typen Person, 
// som har et navn og en alder
struct Person {
	string name;
	int age;
};

// Så ønsker vi å "pakke inn" inisialiseringen/
// oppsettet av en person i en egen funksjon
void initPerson(Person& p, string name, int age) {
	p.name = name;
	p.age = age;
}

// Samme print funksjon som tidligere
void printPerson(Person& p) {
	cout << p.name << " er " << p.age << " år gammel." << endl;
}

int main() {
	// Lager en variabel av typen person
	Person p;
	// Bruker init-funksjonen vår til å gi p 
	// de riktige verdiene
	initPerson(p, "Sindre", 23);
}