#include <iostream>
#include <vector>

using namespace std;

class Animals {
public:
	virtual void walk() = 0;
};

class Cats : public Animals {
public:
	void walk() {
		cout << "Cat is walking" << endl;
	}
};

class Dogs : public Animals {
public:
	void walk() {
		cout << "Dog is walking" << endl;
	}
};

int main() {

	Cats aCat;
	Dogs aDog;

	Animals* ptr = nullptr;

	ptr = &aCat;
	ptr->walk();

	ptr = &aDog;
	ptr->walk();
	

	return 0;
}
