#include <iostream>
#include <string>
using namespace std;

/*

S� n� har vi (se Constructor eksempelet) en klasse med
en konstrukt�r og en funksjon som lar oss skrive ut 
en person, som heter print(). 

S� vi kan skrive ut, men vi m� gj�re det med .print() funksjonen
Hva om jeg vil bruke << til � skrive ut? 

*/

// Dette g�r vanligvis i header(.h/.hpp) filen
struct Person {
	string name;
	int age;

	//Bruker en konstrukt�r fremfor init
	Person(string name, int age);

};

// Fremfor print, implementerer vi utskriftsoperatoren
ostream& operator<<(ostream& os, Person& p) {
	os << p.name << " er " << p.age << " �r gammel.";

	return os;
}

Person::Person(string name, int age) {
	name = name;
	age = age;
}

// Vi ville nok heller skrevet det s�nn her, men for � vise 
// likheten til init() s� har vi versjonen over
// Person::Person(string name, int age) : name{ name }, age{ age } {}


int main() {
	Person persOne("Sindre", 23);
	cout << persOne;
}