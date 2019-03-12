#include <string>
#include <iostream>
using namespace std;

// Vi lager oss igjen typen Person, 
// som har et navn og en alder
struct Person {
	string name;
	int age;
};

// S� �nsker vi � "pakke inn" inisialiseringen/
// oppsettet av en person i en egen funksjon
void initPerson(Person& p, string name, int age) {
	p.name = name;
	p.age = age;
}

// Samme print funksjon som tidligere
void printPerson(Person& p) {
	cout << p.name << " er " << p.age << " �r gammel." << endl;
}

int main() {
	// Lager en variabel av typen person
	Person p;
	// Bruker init-funksjonen v�r til � gi p 
	// de riktige verdiene
	initPerson(p, "Sindre", 23);
}