#include <iostream>

using namespace std;

class canGoWrong {
public:
	canGoWrong() {
		char* pMemory = new char[99999999999];
		delete[] pMemory;
	}
};

int main() {

	try {
		canGoWrong wrong;
	}
	catch (bad_alloc& e) {
		cout << "Caught exceptions: " << e.what() << endl;
	}
	cout << "still running" << endl;
	

	return 0;
}
