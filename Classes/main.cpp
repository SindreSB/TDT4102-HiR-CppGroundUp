#include <iostream>
#include <string>
using namespace std;

// Dette går vanligvis i header(.h/.hpp) filen
struct Person {
	string name;
	int age;

	// I stedet for initPerson og printPerson kan vi
	// heller gjøre dem til medlemsfunksjoner
	void init(string name, int age);
	void print();
};

void Person::init(string name, int age) {
	name = name;
	age = age;
}

void Person::print() {
	cout << name << " er " << age << " år gammel.";
}

int main() {
	Person persOne;
	persOne.init( "Sindre", 23 );

	persOne.print();
}