#include <string>
#include <iostream>
using namespace std;

// Deklarerer og definerer funksjonen
// Deklareringen gj�r vi ofte i en header(.h/.hpp) fil
void printPerson(string name, int age)
{
	cout << name << " er " << age << " �r gammel." << endl;
}


int main() {
	// Jeg har lyst til � representere en person, som ha et navn og en alder
	string persOneName;
	int persOneAge;

	// S� gir jeg variablene verdi
	persOneName = "Sindre";
	persOneAge = 23;

	// S� har jeg lyst til � lage en person til
	string persTwoName;
	int persTwoAge;

	persTwoName = "Frode";
	persTwoAge = 31;

	// S� har jeg lyst til � skrive ut de to personene ved 
	// hjelp av en funksjon som jeg har kalt printPerson
	printPerson(persOneName, persOneAge);
	printPerson(persTwoName, persTwoAge);
}

