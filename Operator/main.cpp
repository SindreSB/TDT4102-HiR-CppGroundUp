#include <iostream>
#include <string>
using namespace std;

/*

Så nå har vi (se Constructor eksempelet) en klasse med
en konstruktør og en funksjon som lar oss skrive ut 
en person, som heter print(). 

Så vi kan skrive ut, men vi må gjøre det med .print() funksjonen
Hva om jeg vil bruke << til å skrive ut? 

*/

// Dette går vanligvis i header(.h/.hpp) filen
struct Person {
	string name;
	int age;

	//Bruker en konstruktør fremfor init
	Person(string name, int age);

};

// Fremfor print, implementerer vi utskriftsoperatoren
ostream& operator<<(ostream& os, Person& p) {
	os << p.name << " er " << p.age << " år gammel.";

	return os;
}

Person::Person(string name, int age) {
	name = name;
	age = age;
}

// Vi ville nok heller skrevet det sånn her, men for å vise 
// likheten til init() så har vi versjonen over
// Person::Person(string name, int age) : name{ name }, age{ age } {}


int main() {
	Person persOne("Sindre", 23);
	cout << persOne;
}