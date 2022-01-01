#include <iostream>

using namespace std;

#include <exception>

class myException :public exception {
	virtual const char* what() const throw() {
		return "Something bad happened!";
	}
};

class test {
public:
	void goesWrong() {
		throw myException();
	}
};

int main() {

	test test;

	try {
		test.goesWrong();
	}
	catch (myException& e) {
		cout << e.what() << endl;
	}
	
	

	return 0;
}
