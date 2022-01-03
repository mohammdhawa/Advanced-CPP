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

	std::vector< std::vector<int> > grid(3, std::vector<int>(4, 7));

	for (int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++)
			std::cout << grid[row][col] << ' ';
		std::cout << std::endl;
	}

	return 0;
}
