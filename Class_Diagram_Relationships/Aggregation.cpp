#include <iostream>
#include <vector>

using namespace std;

class Address {
public:
	int houseNo;
	string colony, city, state;
	
	Address(int houseNo, string colony, string city, string state) {
		this->houseNo = houseNo;
		this->colony = colony;
		this->city = city;
		this->state = state;	
	}

};

class Person {
	Address* address;
public:
	string name;

	Person(string name, Address* address) {
		this->name = name;
		this->address = address;
	}

	void display() {
		cout << name << " " << address->houseNo << " " << address->colony << " " << address->city << " " << address->state << endl;
	}

};

int main() {

	Address add1 = Address(0014, "Kartal Bey", "Demircan", "Merkez, kilis");
	Person p1 = Person("Mohammad's Address: ->", &add1);
	Person p2 = Person("Mahmoud's Address: ->", &add1);

	p1.display();
	p2.display();
}
