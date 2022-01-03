#include <iostream>
#include <vector>

class books {
	int pageNo;
	float price;
	std::string name;
public:
	books(): pageNo(0), price(0.0), name("") {}
	books(int pn, float p, std::string n) {
		pageNo = pn;
		price = p;
		name = n;
	}
	void display() {
		std::cout << "Page number: " << pageNo << "\nPrice: " << price << "\nName: " << name << std::endl;
	}
};

int main() {

	std::vector<std::string>strings;

	strings.push_back("One");
	strings.push_back("Two");
	strings.push_back("Three");


	for (int i = 0; i < strings.size(); i++)
		std::cout << strings[i] << std::endl;
	std::cout << "\n-----------------------\n";

	std::vector<std::string>::iterator it = strings.begin();

	while (it != strings.end()) {
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << "\n-----------------------\n";


	std::vector<books>book;
	books bk;

	bk = { 472, 21.99, "Object Oriented" };

	book.push_back(bk);

	bk = { 239, 32.99, "Polymorphism" };
	
	book.push_back(bk);

	bk = { 381, 48.98, "Data Structures" };

	book.push_back(bk);

	std::vector<books>::iterator bookIter = book.begin();
	while (bookIter != book.end()) {
		(*bookIter).display();
		bookIter++;
	}

	return 0;
}
