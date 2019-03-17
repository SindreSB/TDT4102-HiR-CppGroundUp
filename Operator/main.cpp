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

	Person(string name, int age);

	void print();
};

void Person::print() {
	cout << name << " er " << age << " �r gammel.";
}

Person::Person(string name, int age) {
	name = name;
	age = age;
}


int main() {
	Person persOne("Sindre", 23);
	persOne.print();
}