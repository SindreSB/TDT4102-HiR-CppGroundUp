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

	Person(string name, int age);

	void print();
};

void Person::print() {
	cout << name << " er " << age << " år gammel.";
}

Person::Person(string name, int age) {
	name = name;
	age = age;
}


int main() {
	Person persOne("Sindre", 23);
	persOne.print();
}