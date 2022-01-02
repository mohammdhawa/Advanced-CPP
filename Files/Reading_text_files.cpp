#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	
	std::string inFileName = "text.txt";

	std::fstream inFile;

	inFile.open(inFileName);

	if (inFile.is_open()) {
		std::string line;
		
		while (!inFile.eof()) {
			getline(inFile, line);
			std::cout << line << std::endl;
		}
		inFile.close();
	}
	else {
		std::cout << "Cannot open file: " << inFileName << std::endl;
	}
	
	
	

	return 0;
}
