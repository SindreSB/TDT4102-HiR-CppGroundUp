#include <string>
#include <iostream>
using namespace std;


struct Person {
	string name;
	int age;
};

void printPerson(Person& p) {
	cout << p.name << " er " << p.age << " år gammel." << endl;
}

int main() {
	// Lager en variabel/objekt av typen Person
	Person persOne;

	// For å aksessere medlemmene i et objekt bruker vi
	// . -operatoren, aka "member selection"
	persOne.name = "Sindre";
	persOne.age = 23;

	Person persTwo;
	persTwo.name = "Frode";
	persTwo.age = 31;

	printPerson(persOne);
	printPerson(persTwo);
}
