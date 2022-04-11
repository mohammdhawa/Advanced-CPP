#include <iostream>
#include <vector>

using namespace std;

class Book;

class Person {
	string name;
	int age;

	////////////////////////////
	Book book;

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
	
	///////////////////////////
	vector<Person>authors;

public:

	vector<Person>getAuthor() {
		return authors;
	 }

	void addAuthor(Person author) {
		authors.push_back(author);
	}

};
