#include <string>
#include <iostream>
using namespace std;

// Vi lager oss igjen typen Person, 
// som har et navn og en alder
struct Person {
	string name;
	int age;
};

// Samme print funksjon som tidligere
void printPerson(Person& p) {
	cout << p.name << " er " << p.age << " �r gammel." << endl;
}



int main() {

}