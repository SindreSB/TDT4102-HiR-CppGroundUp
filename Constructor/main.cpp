#include <iostream>
#include <string>
using namespace std;

/*

I forige eksempel, Classes m�tte vi opprette "tom" person f�rst, 
og s� kunne vi bruke init() for � sette navn og alder

Men hvis vi tenker oss om s� hadde det v�rt praktisk � kunne sette 
navn og alder med en gang, og ikke i to stek. I tillegg, s� gir det
egentlig ikke s� mye mening � opprette en person som ikke har et navn

L�sning: Konstrukt�r

*/

// Dette g�r vanligvis i header(.h/.hpp) filen
struct Person {
	string name;
	int age;

	//Bruker en konstrukt�r fremfor init
	Person(string name, int age);
	
	void print();
};

Person::Person(string name, int age) {
	name = name;
	age = age;
}

// Vi ville nok heller skrevet det s�nn her, men for � vise 
// likheten til init() s� har vi versjonen over
// Person::Person(string name, int age) : name{ name }, age{ age } {}

void Person::print() {
	cout << name << " er " << age << " �r gammel.";
}

int main() {
	Person persOne("Sindre", 23);

	persOne.print();
}