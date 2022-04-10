#include <iostream>

using namespace std;

class Person {
	string name;
	int age;

public:
	Person(string name) {
		this->name = name;
	}

	void printPerson() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}

	string getName() {
		return name;
	}

};

class Book {
	string name;
	string publisher;
	Person author;

public:

	Person getAuthors() {
		return author;
	}

	void addAuthor(Person author) {
		this->author = author;
	}

};
