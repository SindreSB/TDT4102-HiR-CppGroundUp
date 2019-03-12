#include <string>
#include <iostream>
using namespace std;

// Deklarerer og definerer funksjonen
// Deklareringen gjør vi ofte i en header(.h/.hpp) fil
void printPerson(string name, int age)
{
	cout << name << " er " << age << " år gammel." << endl;
}


int main() {
	// Jeg har lyst til å representere en person, som ha et navn og en alder
	string persOneName;
	int persOneAge;

	// Så gir jeg variablene verdi
	persOneName = "Sindre";
	persOneAge = 23;

	// Så har jeg lyst til å lage en person til
	string persTwoName;
	int persTwoAge;

	persTwoName = "Frode";
	persTwoAge = 31;

	// Så har jeg lyst til å skrive ut de to personene ved 
	// hjelp av en funksjon som jeg har kalt printPerson
	printPerson(persOneName, persOneAge);
	printPerson(persTwoName, persTwoAge);
}

