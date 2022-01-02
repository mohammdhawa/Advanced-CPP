#include <iostream>
#include <string>
#include <fstream>


int main() {
	
	std::string fileName = "states.txt";
	std::fstream input;

	input.open(fileName);

	if (!input.is_open()) {
		return 1;
	}
	while (input) {
		std::string line;
		getline(input, line, ':');

		int population;
		input >> population;

		input >> std::ws;

		if (!input)
			break;

		std::cout <<"'" << line << "'" << " -- '" << population << "'" << std::endl;
	}
	input.close();
	
	
	

	return 0;
}
