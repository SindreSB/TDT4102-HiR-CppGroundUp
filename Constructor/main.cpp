#include <iostream>
#include <string>
using namespace std;

/*

I forige eksempel, Classes måtte vi opprette "tom" person først, 
og så kunne vi bruke init() for å sette navn og alder

Men hvis vi tenker oss om så hadde det vært praktisk å kunne sette 
navn og alder med en gang, og ikke i to stek. I tillegg, så gir det
egentlig ikke så mye mening å opprette en person som ikke har et navn

Løsning: Konstruktør

*/

// Dette går vanligvis i header(.h/.hpp) filen
struct Person {
	string name;
	int age;

	//Bruker en konstruktør fremfor init
	Person(string name, int age);
	
	void print();
};

Person::Person(string name, int age) {
	name = name;
	age = age;
}

// Vi ville nok heller skrevet det sånn her, men for å vise 
// likheten til init() så har vi versjonen over
// Person::Person(string name, int age) : name{ name }, age{ age } {}

void Person::print() {
	cout << name << " er " << age << " år gammel.";
}

int main() {
	Person persOne("Sindre", 23);

	persOne.print();
}