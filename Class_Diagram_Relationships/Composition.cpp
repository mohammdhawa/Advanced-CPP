#include <iostream>
#include <vector>

using namespace std;

class Birthday {
	int year;
	int month;
	int day;
public:
	Birthday(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}

	void printDate() {
		cout << year << "/" << month << "/" << day << endl;
	}
};

class People {
	string name;
	Birthday dateOfBirth;
public:
	People(string nm, Birthday dt) : name(nm), dateOfBirth(dt) {}

	void printInfo() {
		cout << name << " was born on ";
		dateOfBirth.printDate();
	}
};

int main() {

	Birthday birthObj(27, 8, 2022);

	People me("Mohammad", birthObj);

	me.printInfo();

}
